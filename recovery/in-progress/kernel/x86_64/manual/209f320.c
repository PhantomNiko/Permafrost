/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a4156 (*(uint8_t *)(0x20f4911U))
#define local_38 (*(void * *)(frame + 136))
#define local_48 (*(undefined4 * *)(frame + 120))
#define local_58 (*(undefined8 *)(frame + 104))
#define local_68 (*(undefined8 *)(frame + 88))
#define local_78 (*(undefined8 *)(frame + 72))
#define local_80 (*(int * *)(frame + 64))
#define local_88 (*(int * *)(frame + 56))
#define local_a8 (*(char (*)[32])(frame + 24))
#define uStack_40 (*(undefined8 *)(frame + 128))
#define uStack_50 (*(undefined8 *)(frame + 112))
#define uStack_60 (*(undefined8 *)(frame + 96))
#define uStack_6c (*(undefined4 *)(frame + 84))
#define uStack_70 (*(undefined4 *)(frame + 80))
ulonglong recovered_209f320(int *param_1,int *param_2,byte param_3)

{
  unsigned char frame[224] __attribute__((aligned(16))) = {0};

  int *piVar1;
  uchar uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  long lVar9;
  long lVar10;

  local_38 = (void *)0x0;
  if (param_2 != (int *)0x0 && param_1 != (int *)0x0) {
    if (*param_1 == 8) {
      if ((*(long *)(param_1 + 0xc) != 0) &&
         (uVar4 = recovered_20a8d30(param_2,&local_38), (char)uVar4 != '\0')) {
        uVar8 = recovered_20bf690(*(long *)(param_1 + 0xc),(long)local_38,param_3);
        recovered_2000bb0(local_38);
        return uVar8;
      }
      recovered_2000bb0(local_38);
    }
    else if (*param_1 == 7) {
      if (*param_2 == 1) {
        iVar3 = param_2[1];
        uVar5 = (ulong)iVar3;
        if (((long)uVar5 < 1 & param_3) == 0) {
          if (iVar3 < 1) {
            return 0;
          }
          lVar9 = *(long *)(param_1 + 10);
          if (lVar9 == 0) {
            return 0;
          }
          if (*(ulong *)(lVar9 + 8) < uVar5) {
            if (param_3 == 0) {
              return 0;
            }
            uVar2 = recovered_20a1b00(lVar9,uVar5);
            if (uVar2 == '\0') {
              return 0;
            }
            lVar9 = *(long *)(param_1 + 10);
            iVar3 = param_2[1];
          }
          return ((long)iVar3 * 0x40 + *(long *)(lVar9 + 0x18)) - 0x40;
        }
      }
      else if (param_3 == 0) {
        return 0;
      }
      lVar9 = *(long *)(param_1 + 10);
      if (lVar9 != 0) {
        local_78 = 0;
        uStack_70 = 0;
        local_68 = 0;
        uStack_60 = 0;
        local_58 = 0;
        uStack_50 = 0;
        local_48 = (undefined4 *)0x0;
        uStack_40 = 0;
        local_88 = param_2;
        local_80 = param_1;
        puVar6 = recovered_2000ad0(0x20);
        if (puVar6 != (undefined4 *)0x0) {
          *puVar6 = 1;
          *(undefined8 *)(puVar6 + 2) = 0;
          *(undefined8 *)(puVar6 + 4) = 0;
          *(undefined8 *)(puVar6 + 6) = 0;
          recovered_205ec00(&local_78);
          local_78 = CONCAT44(PF_PART4(local_78, 4),8);
          local_48 = puVar6;
          if (*(long *)(lVar9 + 8) != 0) {
            lVar10 = 0;
            uVar5 = 0;
            do {
              uVar5 = uVar5 + 1;
              pf_varargs_20039e0__4_(local_a8,0x20,&DAT_020a4156,(uint)uVar5);
              puVar7 = (undefined8 *)recovered_20bf690((long)local_48,(long)local_a8,'\x01');
              if ((puVar7 == (undefined8 *)0x0) ||
                 (uVar4 = recovered_20a0670(puVar7,(undefined8 *)(*(long *)(lVar9 + 0x18) + lVar10))
                 , (char)uVar4 == '\0')) {
                recovered_205ec00(&local_78);
                return 0;
              }
              lVar10 = lVar10 + 0x40;
            } while (uVar5 < *(ulong *)(lVar9 + 8));
          }
          piVar1 = local_80;
          recovered_205ec00((undefined8 *)local_80);
          recovered_205ec00((undefined8 *)piVar1);
          *(undefined4 **)(piVar1 + 0xc) = local_48;
          *(undefined8 *)(piVar1 + 0xe) = uStack_40;
          *(undefined8 *)(piVar1 + 8) = local_58;
          *(undefined8 *)(piVar1 + 10) = uStack_50;
          *(undefined8 *)(piVar1 + 4) = local_68;
          *(undefined8 *)(piVar1 + 6) = uStack_60;
          *(undefined8 *)piVar1 = local_78;
          *(ulong *)(piVar1 + 2) = CONCAT44(uStack_6c,uStack_70);
          local_78 = 0;
          uStack_70 = 0;
          local_68 = 0;
          uStack_60 = 0;
          local_58 = 0;
          uStack_50 = 0;
          local_48 = (undefined4 *)0x0;
          uStack_40 = 0;
          uVar8 = recovered_209f320(piVar1,local_88,1);
          return uVar8;
        }
      }
    }
  }
  return 0;
}
