/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020aaff3 (*(uint8_t *)(0x20fc671U))
#define DAT_020ab021 (*(uint8_t *)(0x20fc69fU))
#define DAT_020de648 (*(uint64_t volatile *)(0x226c298U))
#define DAT_020de650 (*(uint64_t volatile *)(0x226c2a0U))
#define str_020a577d (*(char (*)[1])(0x20f5f38U))
#define str_020aaff6 (*(char (*)[1])(0x20fc674U))
#define str_020ab00f (*(char (*)[1])(0x20fc68dU))
#define str_020ab024 (*(char (*)[1])(0x20fc6a2U))
#define str_020ab040 (*(char (*)[1])(0x20fc6beU))
ulong recovered_20c4080(int *param_1,char *param_2,int *param_3,ulong param_4,undefined8 *param_5,
                       long in_R9)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *unaff_R15;
  ulong uVar10;

  if ((param_4 == 0) || (*param_3 != 6)) {
    pcVar4 = str_020aaff6;
LAB_020858ce:
    uVar10 = 0;
    pf_varargs_205eb00__8_(param_1,param_2,pcVar4,(ulonglong)param_2);
    goto LAB_02085927;
  }
  if ((param_3[1] != 0) && (lVar7 = DAT_020de648, lVar7 != 0)) {
    lVar5 = DAT_020de650;
    plVar8 = (long *)(lVar5 + 8);
    do {
      if ((int)plVar8[-1] == param_3[1]) {
        lVar7 = *plVar8;
        if ((((lVar7 != 0) && (*(char *)(lVar7 + 7) == '\0')) && (*(char *)(lVar7 + 5) == '\x01'))
           && (*(long *)(lVar7 + 0x10) != 0)) {
          if (2 < param_4) {
            pcVar4 = str_020ab00f;
            goto LAB_020858ce;
          }
          if (param_4 == 2) {
            if ((param_3[0x10] != 3) || (pcVar4 = *(char **)(param_3 + 0x14), pcVar4 == (char *)0x0)
               ) {
              uVar10 = 0;
              pf_varargs_205eb00__8__4_(param_1,param_2,str_020a577d,(ulonglong)param_2,2);
              goto LAB_02085927;
            }
          }
          else {
            pcVar4 = &DAT_020aaff3;
          }
          iVar2 = recovered_2002eb0(pcVar4,&DAT_020ab021);
          if (iVar2 == 0) {
            uVar10 = *(ulong *)(lVar7 + 0x20);
            lVar5 = 0;
            if (uVar10 <= *(ulong *)(lVar7 + 0x18)) {
              lVar5 = *(ulong *)(lVar7 + 0x18) - uVar10;
            }
            uVar3 = recovered_20a9af0((undefined4 *)param_5,
                                      (undefined1 *)(uVar10 + *(long *)(lVar7 + 0x10)),lVar5);
            *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)(lVar7 + 0x18);
            uVar10 = CONCAT71((int7)((ulong)param_5 >> 8),1);
            if ((char)uVar3 == '\0') goto LAB_02085a77;
            goto LAB_02085927;
          }
          iVar2 = recovered_2002eb0(pcVar4,&DAT_020aaff3);
          if ((iVar2 != 0) && (*pcVar4 != '\0')) {
            pcVar4 = str_020ab040;
            goto LAB_020858ce;
          }
          uVar10 = *(ulong *)(lVar7 + 0x18);
          uVar1 = *(ulong *)(lVar7 + 0x20);
          if (uVar10 <= uVar1) {
            *param_5 = 0;
            *(undefined4 *)(param_5 + 1) = 0;
            param_5[2] = 0;
            param_5[3] = 0;
            param_5[4] = 0;
            param_5[5] = 0;
            param_5[6] = 0;
            param_5[7] = 0;
            goto LAB_02085924;
          }
          lVar5 = *(long *)(lVar7 + 0x10);
          uVar9 = uVar1;
          goto LAB_020859d3;
        }
        break;
      }
      plVar8 = plVar8 + 2;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  *param_5 = 0;
  *(undefined4 *)(param_5 + 1) = 0;
  param_5[2] = 0;
  param_5[3] = 0;
  param_5[4] = 0;
  param_5[5] = 0;
  param_5[6] = 0;
  param_5[7] = 0;
  param_5 = unaff_R15;
  goto LAB_02085924;
  while (uVar9 = uVar9 + 1, uVar10 != uVar9) {
LAB_020859d3:
    if (*(char *)(lVar5 + uVar9) == '\n') goto LAB_020859e5;
  }
  uVar9 = uVar10;
LAB_020859e5:
  if (uVar9 - uVar1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = (uVar9 - uVar1) - (ulong)(*(char *)(lVar5 + -1 + uVar9) == '\r');
  }
  uVar3 = recovered_20a9af0((undefined4 *)param_5,(undefined1 *)(lVar5 + uVar1),lVar6);
  if ((char)uVar3 == '\0') {
LAB_02085a77:
    uVar10 = 0;
    pf_varargs_205eb00___(param_1,param_2,str_020ab024);
    goto LAB_02085927;
  }
  *(ulong *)(lVar7 + 0x20) = uVar9 + (uVar9 < *(ulong *)(lVar7 + 0x18));
LAB_02085924:
  uVar10 = CONCAT71((int7)((ulong)param_5 >> 8),1);
LAB_02085927:
  return uVar10 & 0xffffffff;
}
