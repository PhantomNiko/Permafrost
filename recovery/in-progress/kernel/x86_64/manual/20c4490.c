/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a1570 (*(uint32_t *)(0x20eaf50U))
#define DAT_020a259c (*(uint8_t *)(0x20ec670U))
#define DAT_020de648 (*(uint64_t volatile *)(0x226c298U))
#define DAT_020de650 (*(uint64_t volatile *)(0x226c2a0U))
#define str_020aaff6 (*(char (*)[1])(0x20fc674U))
ulong recovered_20c4490(int *param_1,char *param_2,int *param_3,long param_4,undefined8 *param_5,
                       undefined8 in_R9)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  ulong unaff_RBX;
  ulong uVar5;
  undefined1 *puVar6;
  undefined4 uVar7;

  if ((param_4 == 0) || (*param_3 != 6)) {
    uVar5 = 0;
    pf_varargs_205eb00__8_(param_1,param_2,str_020aaff6,(ulonglong)param_2);
  }
  else {
    if ((param_3[1] != 0) && (lVar3 = DAT_020de648, lVar3 != 0)) {
      lVar1 = DAT_020de650;
      plVar4 = (long *)(lVar1 + 8);
      do {
        if ((int)plVar4[-1] == param_3[1]) {
          lVar3 = *plVar4;
          if ((lVar3 != 0) && (*(char *)(lVar3 + 7) != '\x01')) {
            unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),1);
            if ((*(char *)(lVar3 + 6) == '\x01') && (*(long *)(lVar3 + 8) != 0)) {
              puVar6 = &DAT_020a259c;
              if (*(undefined1 **)(lVar3 + 0x38) != (undefined1 *)0x0) {
                puVar6 = *(undefined1 **)(lVar3 + 0x38);
              }
              uVar2 = recovered_203f020(*(long *)(lVar3 + 8),(long)puVar6,*(long *)(lVar3 + 0x28));
              unaff_RBX = (ulong)uVar2;
            }
            *(undefined1 *)(lVar3 + 7) = 1;
            recovered_2000bb0(*(void **)(lVar3 + 8));
            *(undefined8 *)(lVar3 + 8) = 0;
            recovered_2000bb0(*(void **)(lVar3 + 0x10));
            *(undefined8 *)(lVar3 + 0x10) = 0;
            *(undefined8 *)(lVar3 + 0x18) = 0;
            *(undefined8 *)(lVar3 + 0x20) = 0;
            recovered_2000bb0(*(void **)(lVar3 + 0x38));
            *(undefined8 *)(lVar3 + 0x28) = 0;
            *(undefined8 *)(lVar3 + 0x30) = 0;
            *(undefined8 *)(lVar3 + 0x38) = 0;
            if ((char)unaff_RBX == '\0') {
              uVar7 = 0;
            }
            else {
              uVar7 = DAT_020a1570;
            }
            *(undefined4 *)param_5 = 5;
            *(uint *)((long)param_5 + 4) = (uint)unaff_RBX & 0xff;
            *(undefined4 *)(param_5 + 1) = uVar7;
            param_5[2] = 0;
            param_5[3] = 0;
            param_5[4] = 0;
            param_5[5] = 0;
            param_5[6] = 0;
            param_5[7] = 0;
            goto LAB_02085d1b;
          }
          break;
        }
        plVar4 = plVar4 + 2;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    *param_5 = 0x100000005;
    *(undefined4 *)(param_5 + 1) = 0x3f800000;
    param_5[2] = 0;
    param_5[3] = 0;
    param_5[4] = 0;
    param_5[5] = 0;
    param_5[6] = 0;
    param_5[7] = 0;
LAB_02085d1b:
    uVar5 = CONCAT71((int7)(unaff_RBX >> 8),1);
  }
  return uVar5 & 0xffffffff;
}
