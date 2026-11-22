/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a259c (*(uint8_t *)(0x20ec670U))
#define DAT_020cf3a0 (*(uint64_t volatile *)(0x215a7b0U))
#define DAT_020cf454 (*(uint8_t volatile *)(0x215a894U))
#define local_128 (*(uint (*)[61])(frame + 24))
#define local_34 (*(uint *)(frame + 268))
#define str_020a5763 (*(char (*)[1])(0x20f5f1eU))
#define str_020a577d (*(char (*)[1])(0x20f5f38U))
#define str_020a57b7 (*(char (*)[1])(0x20f5f03U))
#define str_020a5c1c (*(char (*)[1])(0x20f63beU))
#define str_020a5d9c (*(char (*)[1])(0x20f653aU))
#define str_020a5db9 (*(char (*)[1])(0x20f6557U))
#define str_020a5ddf (*(char (*)[1])(0x20f657dU))
#define str_020a5dee (*(char (*)[1])(0x20f658cU))
ulong recovered_20b4bd0(int *param_1,char *param_2,int *param_3,ulong param_4,undefined4 *param_5,
                       uint *in_R9)

{
  unsigned char frame[352] __attribute__((aligned(16))) = {0};

  byte bVar1;
  int iVar2;
  long lVar3;
  char cVar4;
  uchar uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulong uVar8;
  undefined1 *puVar9;
  uint *puVar10;
  undefined8 extraout_RDX = 0;
  char *pcVar11;
  ulong uVar12;
  int *unaff_R14;
  undefined1 *data;
  bool bVar13;
  bool bVar14;

  local_34 = 0;
  if (param_4 == 0) {
    pcVar11 = str_020a5d9c;
  }
  else {
    if (param_3 == (int *)0x0) {
      if (param_4 == 1) {
        pcVar11 = str_020a5763;
LAB_0207777e:
        uVar8 = 0;
        pf_varargs_205eb00__8__4_(param_1,param_2,pcVar11,(ulonglong)param_2,1);
        goto LAB_020778e5;
      }
LAB_020776d1:
      uVar8 = 0;
      pf_varargs_205eb00__8__4__8_(param_1,param_2,str_020a57b7,(ulonglong)param_2,1,0x20ec670U);
      goto LAB_020778e5;
    }
    iVar2 = *param_3;
    switch((uintptr_t)(iVar2)) {
    case 1:
    case 5:
      if (param_3[1] < 0) {
        if (iVar2 == 3) goto switchD_02077544_caseD_3;
        if (iVar2 == 2) goto switchD_02077544_caseD_2;
        goto switchD_02077544_caseD_4;
      }
      local_34 = param_3[1];
      break;
    case 2:
switchD_02077544_caseD_2:
      if (pf_bits_float((uint32_t)param_3[2]) < 0.0) goto switchD_02077544_caseD_4;
      local_34 = (uint)(long)pf_bits_float((uint32_t)param_3[2]);
      break;
    case 3:
switchD_02077544_caseD_3:
      if ((*(long *)(param_3 + 4) == 0) ||
         (uVar6 = recovered_208f550(*(long *)(param_3 + 4),&local_34), unaff_R14 = param_1,
         (char)uVar6 == '\0')) goto switchD_02077544_caseD_4;
      break;
    default:
switchD_02077544_caseD_4:
      if (param_4 != 1) goto LAB_020776d1;
      if ((*param_3 != 3) || (*(long *)(param_3 + 4) == 0)) {
        pcVar11 = str_020a577d;
        goto LAB_0207777e;
      }
      cVar4 = DAT_020cf454;
      if (cVar4 == '\x01') {
        puVar10 = local_128;
        recovered_20411d0(*(long *)(param_3 + 4),(undefined1 *)local_128);
        uVar7 = recovered_2042180((byte *)local_128);
        if ((uVar7 != 0xffffffffffffffff) &&
           (((lVar3 = DAT_020cf3a0, lVar3 == 0 ||
             ((*(byte *)(lVar3 + 0x104 + uVar7 * 0x118) & 2) == 0)) &&
            (uVar5 = recovered_20422c0(uVar7,puVar10,extraout_RDX), uVar5 != '\0')))) {
          lVar3 = DAT_020cf3a0;
          puVar9 = *(undefined1 **)(lVar3 + 0xf8 + uVar7 * 0x118);
          uVar8 = (ulong)*(uint *)(lVar3 + 0x100 + uVar7 * 0x118);
          if (uVar8 == 0) {
LAB_02077900:
            uVar6 = recovered_20a9af0(param_5,puVar9,uVar8);
          }
          else {
            bVar13 = false;
            uVar12 = 1;
            do {
              bVar1 = puVar9[uVar12 - 1];
              if (((0xd < bVar1) || ((0x2600U >> (bVar1 & 0x1f) & 1) == 0)) &&
                 ((byte)(bVar1 + 0x81) < 0xa1)) break;
              bVar13 = uVar8 <= uVar12;
              bVar14 = uVar12 != uVar8;
              uVar12 = uVar12 + 1;
            } while (bVar14);
            if (bVar13) goto LAB_02077900;
            uVar6 = recovered_20c57c0(param_5,(long)puVar9,uVar8);
          }
          uVar8 = (ulong)uVar6;
          goto LAB_020778e5;
        }
      }
      uVar8 = 0;
      pf_varargs_205eb00___(param_1,param_2,str_020a5ddf);
      goto LAB_020778e5;
    case 6:
      local_34 = param_3[1];
    }
    local_128[0] = 1;
    if (param_4 < 3) {
      if (param_4 == 2) {
        uVar5 = recovered_20b3650(param_1,param_2,(long)param_3,2,1,(int *)local_128);
        if (uVar5 != '\0') {
          uVar8 = (ulong)local_128[0];
          if ((uVar8 < 5) && ((0x16U >> (local_128[0] & 0x1f) & 1) != 0)) {
            puVar10 = (uint *)(ulong)local_34;
            if (uVar8 == 4) {
              uVar6 = *puVar10;
            }
            else {
              if (local_128[0] != 2) {
                unaff_R14 = param_1;
                if (local_128[0] == 1) goto LAB_0207779c;
                pcVar11 = str_020a5c1c;
                goto LAB_020775e9;
              }
              uVar6 = (uint)(ushort)*puVar10;
            }
            goto LAB_020777a1;
          }
          if (uVar8 == 0) {
            if ((param_5 != (undefined4 *)0x0) &&
               (puVar9 = recovered_2000ad0(1), puVar9 != (undefined1 *)0x0)) {
              *puVar9 = 0;
LAB_020778cb:
              recovered_205ec00((undefined8 *)param_5);
              *param_5 = 3;
              *(undefined1 **)(param_5 + 4) = puVar9;
              uVar8 = CONCAT71((int7)((ulong)puVar9 >> 8),1);
              goto LAB_020778e5;
            }
          }
          else {
            if (0xffff < local_128[0]) {
              pcVar11 = str_020a5dee;
              goto LAB_020775e9;
            }
            puVar9 = (undefined1 *)(ulong)local_34;
            uVar12 = 0;
            do {
              if (puVar9[uVar12] == '\0') goto LAB_0207788c;
              uVar12 = uVar12 + 1;
            } while (uVar8 != uVar12);
            uVar12 = uVar8;
LAB_0207788c:
            if (param_5 != (undefined4 *)0x0) {
              data = &DAT_020a259c;
              if (puVar9 != (undefined1 *)0x0) {
                data = puVar9;
              }
              puVar9 = recovered_2000ad0(uVar12 + 1);
              if (puVar9 != (undefined1 *)0x0) {
                if (uVar12 != 0) {
                  recovered_2001410(puVar9,data,uVar12);
                }
                puVar9[uVar12] = 0;
                goto LAB_020778cb;
              }
            }
          }
        }
        uVar8 = 0;
      }
      else {
        puVar10 = (uint *)(ulong)local_34;
LAB_0207779c:
        uVar6 = (uint)(byte)*puVar10;
        param_1 = unaff_R14;
LAB_020777a1:
        *param_5 = 1;
        param_5[1] = uVar6;
        param_5[2] = (float)(int)uVar6;
        *(undefined8 *)(param_5 + 4) = 0;
        *(undefined8 *)(param_5 + 6) = 0;
        *(undefined8 *)(param_5 + 8) = 0;
        *(undefined8 *)(param_5 + 10) = 0;
        *(undefined8 *)(param_5 + 0xc) = 0;
        *(undefined8 *)(param_5 + 0xe) = 0;
        uVar8 = CONCAT71((int7)((ulong)param_1 >> 8),1);
      }
      goto LAB_020778e5;
    }
    pcVar11 = str_020a5db9;
  }
LAB_020775e9:
  uVar8 = 0;
  pf_varargs_205eb00__8_(param_1,param_2,pcVar11,(ulonglong)param_2);
LAB_020778e5:
  return uVar8 & 0xffffffff;
}
