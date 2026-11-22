/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a25e3 (*(uint8_t *)(0x20ec4d3U))
#define DAT_020cf3a0 (*(uint64_t volatile *)(0x215a7b0U))
#define DAT_020cf3a8 (*(uint64_t volatile *)(0x215a7b8U))
#define DAT_020cf3b0 (*(uint64_t volatile *)(0x215a7c0U))
#define DAT_020cf3b8 (*(uint64_t volatile *)(0x215a7c8U))
#define local_148 (*(byte (*)[256])(frame + 24))
#define local_34 (*(int *)(frame + 300))
#define local_38 (*(undefined4 *)(frame + 296))
#define local_3c (*(undefined4 *)(frame + 292))
#define local_40 (*(undefined4 *)(frame + 288))
#define local_48 (*(ulong *)(frame + 280))
uchar recovered_2074ee0(long param_1,long param_2,int param_3,undefined4 param_4,undefined4 param_5,
                       undefined4 param_6)

{
  unsigned char frame[384] __attribute__((aligned(16))) = {0};

  char *out;
  undefined8 uVar1;
  ulong uVar2;
  uchar uVar3;
  ulonglong uVar4;
  void *pvVar5;
  byte bVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  void *out_00;

  if (((param_1 != 0) &&
      (local_40 = param_6, local_3c = param_5, local_38 = param_4, local_34 = param_3,
      recovered_20411d0(param_1,local_148), local_148[0] != 0)) &&
     (uVar4 = recovered_2042180(local_148), uVar4 == 0xffffffffffffffff)) {
    lVar10 = DAT_020cf3a8;
    uVar8 = lVar10 + 1;
    uVar9 = DAT_020cf3b0;
    if (uVar8 <= uVar9) {
      pvVar5 = (void *)DAT_020cf3a0;
LAB_0204eecd:
      DAT_020cf3a8 = uVar8;
      lVar10 = lVar10 * 0x118;
      out = (char *)((long)pvVar5 + lVar10);
      recovered_2002110(out,0,0x118);
      pf_varargs_20039e0__8_(out,0xf1,&DAT_020a25e3,(ulonglong)local_148);
      *(long *)((long)pvVar5 + lVar10 + 0xf8) = param_2;
      *(int *)((long)pvVar5 + lVar10 + 0x100) = local_34;
      *(undefined4 *)((long)pvVar5 + lVar10 + 0x104) = local_38;
      bVar6 = (byte)local_38 >> 1 & 1;
      if (local_34 == 0) {
        bVar6 = 1;
      }
      *(undefined4 *)((long)pvVar5 + lVar10 + 0x10c) = local_3c;
      if (param_2 != 0) {
        bVar6 = 1;
      }
      *(undefined4 *)((long)pvVar5 + lVar10 + 0x110) = local_40;
      *(byte *)((long)pvVar5 + lVar10 + 0x114) = bVar6;
      lVar10 = DAT_020cf3a8;
      uVar3 = recovered_2069480(lVar10 - 1);
      if (uVar3 == '\0') {
        recovered_2000bb0((void *)param_2);
        recovered_2002110(out,0,0x118);
        uVar1 = DAT_020cf3a8;
        lVar10 = DAT_020cf3a8;
        DAT_020cf3a8 = lVar10 + -1;
        uVar1 = DAT_020cf3a8;
        uVar1 = DAT_020cf3a8;
        uVar1 = DAT_020cf3a8;
        return '\0';
      }
      return '\x01';
    }
    uVar2 = DAT_020cf3b8;
    if (uVar2 == 0 || uVar8 <= uVar2) {
      uVar7 = 0x10;
      if (uVar9 != 0) {
        uVar7 = uVar9;
      }
      for (; uVar7 < uVar8; uVar7 = uVar7 * 2) {
        if ((long)uVar7 < 0) {
          uVar7 = uVar8;
          break;
        }
      }
      uVar9 = uVar2;
      if (uVar7 < uVar2) {
        uVar9 = uVar7;
      }
      if (uVar2 == 0) {
        uVar9 = uVar7;
      }
      pvVar5 = (void *)DAT_020cf3a0;
      pvVar5 = recovered_2000d40(pvVar5,uVar9 * 0x118);
      if (pvVar5 != (void *)0x0) {
        uVar2 = DAT_020cf3b0;
        lVar10 = uVar9 - uVar2;
        local_48 = uVar9;
        if (uVar2 <= uVar9 && lVar10 != 0) {
          out_00 = (void *)((long)pvVar5 + uVar2 * 0x118);
          do {
            recovered_2002110(out_00,0,0x118);
            out_00 = (void *)((long)out_00 + 0x118);
            lVar10 = lVar10 + -1;
          } while (lVar10 != 0);
        }
        DAT_020cf3a0 = pvVar5;
        DAT_020cf3b0 = local_48;
        if (uVar8 <= local_48) {
          lVar10 = DAT_020cf3a8;
          uVar8 = lVar10 + 1;
          goto LAB_0204eecd;
        }
      }
    }
  }
  recovered_2000bb0((void *)param_2);
  return '\0';
}
