/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_0208fa1d (*(uint8_t *)(0x20cd01aU))
#define DAT_0208fc8a (*(uint8_t *)(0x20cd287U))
#define format (*(char * *)(frame + 28))
#define left (*(byte * *)(frame + 24))
#define local_14 (*(int * *)(frame + 92))
#define local_18 (*(ulong * *)(frame + 88))
#define local_1c (*(uint *)(frame + 84))
#define local_20 (*(byte * *)(frame + 80))
#define local_44 (*(ulong (*)[9])(frame + 44))
#define str_0208fd27 (*(char (*)[1])(0x20cd324U))
#define str_0208fd5a (*(char (*)[1])(0x20cd357U))
#define str_0208fd8e (*(char (*)[1])(0x20cd38bU))
#define str_0208fda7 (*(char (*)[1])(0x20cd3a4U))
#define str_0209729a (*(char (*)[1])(0x20d5729U))
undefined4 recovered_20b8bf0(int *incoming_ecx,undefined4 *incoming_edx,int param_3)

{
  unsigned char frame[144] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uchar uVar2;
  undefined4 uVar3;
  void *pvVar4;
  ulong uVar5;
  undefined4 extraout_EAX = 0;
  byte *pbVar6;
  int iVar7;
  uint extraout_EDX = 0;
  uint extraout_EDX_00 = 0;
  uint incoming_edx_00;
  uint incoming_edx_01;
  uint uVar8;
  ulong *puVar9;
  ulong *puVar10;
  byte bVar11;

  bVar11 = 0;
  local_1c = 0;
  local_44[0] = 0;
  local_44[1] = 0;
  local_44[2] = 0;
  local_44[3] = 0;
  local_44[4] = 0;
  local_44[5] = 0;
  local_44[6] = 0;
  local_44[7] = 0;
  local_44[8] = 0;
  if (param_3 == 0 || (incoming_edx == (undefined4 *)0x0 || incoming_ecx == (int *)0x0)) {
    return 0;
  }
  uVar3 = recovered_207dc70(incoming_edx,1,0x20cd321U,&local_1c);
  if ((char)uVar3 == '\0') {
    format = str_0208fd27;
    left = &DAT_0208fc8a;
LAB_02086746:
    pf_varargs_204ff60___(incoming_ecx,(char *)left,format);
  }
  else {
    incoming_edx_00 = extraout_EDX;
    local_18 = incoming_edx;
    local_14 = incoming_ecx;
    if (1 < local_1c) {
      uVar8 = 1;
      do {
        left = *(byte **)(local_18[2] + uVar8 * 4);
        if ((uVar8 & 1) != 0) {
          if (((left == (byte *)0x0) || (bVar1 = *left, bVar1 == 0)) ||
             ((0x19 < (byte)((bVar1 & 0xdf) + 0xbf) && ((bVar1 != 0x5f && (bVar1 != 0x24)))))) {
LAB_0208673a:
            format = str_0208fd5a;
          }
          else {
            bVar1 = left[1];
            if (bVar1 != 0) {
              pbVar6 = left + 2;
              do {
                if ((((bVar1 != 0x2e) && (bVar1 != 0x24)) && (bVar1 != 0x5f)) &&
                   ((9 < (byte)(bVar1 - 0x30U) && (0x19 < (byte)((bVar1 & 0xdf) + 0xbf)))))
                goto LAB_0208673a;
                bVar1 = *pbVar6;
                pbVar6 = pbVar6 + 1;
              } while (bVar1 != 0);
            }
            local_20 = left;
            pvVar4 = recovered_2001860(*(void **)(param_3 + 0x2c),*(int *)(param_3 + 0x30) * 4 + 4);
            if (pvVar4 != (void *)0x0) {
              *(void **)(param_3 + 0x2c) = pvVar4;
              uVar5 = recovered_2002270((char *)local_20);
              pvVar4 = recovered_2001650(uVar5 + 1);
              if (pvVar4 != (void *)0x0) {
                if (uVar5 != 0) {
                  recovered_2001b70(pvVar4,local_20,uVar5);
                }
                *(undefined1 *)((int)pvVar4 + uVar5) = 0;
                iVar7 = *(int *)(param_3 + 0x30);
                incoming_edx_00 = iVar7 + 1;
                *(uint *)(param_3 + 0x30) = incoming_edx_00;
                *(void **)(*(int *)(param_3 + 0x2c) + iVar7 * 4) = pvVar4;
                goto LAB_020865b9;
              }
            }
            uVar5 = local_18[2];
            format = str_0209729a;
LAB_02086776:
            left = *(byte **)(uVar5 + uVar8 * 4);
          }
          goto LAB_02086743;
        }
        iVar7 = recovered_20022a0((char *)left,&DAT_0208fa1d);
        incoming_edx_00 = extraout_EDX_00;
        if (iVar7 != 0) {
          uVar5 = local_18[2];
          format = str_0208fd8e;
          goto LAB_02086776;
        }
LAB_020865b9:
        uVar8 = uVar8 + 1;
      } while (uVar8 < local_1c);
    }
    if (*(int *)(param_3 + 0x30) != 0) {
      if ((local_1c + 1 < *local_18) &&
         (uVar2 = recovered_207de10((long)local_14,local_18,local_1c + 1,*local_18,local_44),
         incoming_edx_00 = incoming_edx_01, uVar2 != '\0')) {
        if ((local_44[0] < 9) && ((0x181U >> (local_44[0] & 0x1f) & 1) != 0)) {
          recovered_2043a90((ulong *)(param_3 + 0x34),incoming_edx_01);
          puVar9 = local_44;
          puVar10 = (ulong *)(param_3 + 0x34);
          for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
            *puVar10 = *puVar9;
            puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
            puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
          }
          *(undefined2 *)(param_3 + 0x18) = 1;
          *(undefined4 *)(param_3 + 0x58) = 0;
          return CONCAT31((int3)((uint)extraout_EAX >> 8),1);
        }
        recovered_2043a90(local_44,incoming_edx_01);
        format = str_0208fda7;
        left = &DAT_0208fc8a;
LAB_02086743:
        incoming_ecx = local_14;
        goto LAB_02086746;
      }
    }
    recovered_2043a90(local_44,incoming_edx_00);
  }
  return 0;
}
