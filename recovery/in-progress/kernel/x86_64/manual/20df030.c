/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020adfe0 (*(uint32_t volatile *)(0x210716cU))
#define DAT_020de648 (*(uint64_t volatile *)(0x226c298U))
#define DAT_020de650 (*(uint64_t volatile *)(0x226c2a0U))
#define DAT_020e60d8 (*(uint64_t volatile *)(0x2274168U))
#define local_40 (*(undefined8 *)(frame + 64))
#define local_50 (*(undefined8 *)(frame + 48))
#define local_60 (*(undefined8 *)(frame + 32))
#define local_68 (*(undefined4 *)(frame + 24))
#define local_6c (*(int *)(frame + 20))
#define local_70 (*(undefined4 *)(frame + 16))
#define uStack_38 (*(undefined8 *)(frame + 72))
#define uStack_48 (*(undefined8 *)(frame + 56))
#define uStack_58 (*(undefined8 *)(frame + 40))
uchar recovered_20df030(int *param_1,int *param_2)

{
  unsigned char frame[160] __attribute__((aligned(16))) = {0};

  long lVar1;
  int iVar2;
  long *plVar3;
  uint uVar4;
  undefined4 *puVar5;
  void *pvVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  int iVar11;
  int *out;
  int iVar12;
  bool bVar13;

  if (param_1 == (int *)0x0) {
    return '\0';
  }
  iVar2 = *param_2;
  puVar5 = recovered_2000ad0(0x20);
  if (puVar5 == (undefined4 *)0x0) {
    return '\0';
  }
  *puVar5 = 1;
  *(undefined8 *)(puVar5 + 2) = 0;
  *(undefined8 *)(puVar5 + 4) = 0;
  *(undefined8 *)(puVar5 + 6) = 0;
  recovered_205ec00((undefined8 *)param_1);
  *param_1 = 8;
  *(undefined4 **)(param_1 + 0xc) = puVar5;
  iVar12 = *param_2;
  bVar13 = true;
  if (iVar12 == 0) {
    uVar8 = DAT_020de648;
    uVar10 = DAT_020e60d8;
    if (uVar8 == uVar10) {
      uVar10 = 8;
      if (uVar8 != 0) {
        uVar10 = uVar8 * 2;
      }
      if (uVar10 <= uVar8) goto LAB_020994d8;
      pvVar6 = (void *)DAT_020de650;
      pvVar6 = recovered_2000d40(pvVar6,uVar10 << 4);
      if (pvVar6 == (void *)0x0) goto LAB_020994d8;
      DAT_020de650 = pvVar6;
      DAT_020e60d8 = uVar10;
      uVar8 = DAT_020de648;
    }
    else {
      pvVar6 = (void *)DAT_020de650;
    }
    iVar11 = DAT_020adfe0;
    do {
      do {
        iVar12 = iVar11;
        iVar11 = iVar12 + 1 + (uint)(iVar12 == -1);
        plVar3 = (long *)((long)pvVar6 + 8);
        uVar10 = uVar8;
      } while (iVar12 == 0);
      while( true ) {
        if (uVar10 == 0) goto LAB_020993b7;
        if ((int)plVar3[-1] == iVar12) break;
        plVar3 = plVar3 + 2;
        uVar10 = uVar10 - 1;
      }
    } while (*plVar3 != 0);
LAB_020993b7:
    DAT_020adfe0 = iVar11;
    *(int *)((long)pvVar6 + uVar8 * 0x10) = iVar12;
    *(int **)((long)pvVar6 + uVar8 * 0x10 + 8) = param_2;
    DAT_020de648 = uVar8 + 1;
    *param_2 = iVar12;
    bVar13 = *param_1 == 8;
  }
  local_70 = 6;
  local_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_6c = iVar12;
  if (((bVar13) && (*(long *)(param_1 + 0xc) != 0)) &&
     (puVar7 = (undefined8 *)recovered_20bf690(*(long *)(param_1 + 0xc),0x20f4f31U,'\x01'),
     puVar7 != (undefined8 *)0x0)) {
    uVar4 = recovered_20a0670(puVar7,(undefined8 *)&local_70);
    recovered_205ec00((undefined8 *)&local_70);
    if ((char)uVar4 != '\0') {
      return '\x01';
    }
  }
  else {
    recovered_205ec00((undefined8 *)&local_70);
  }
  if (iVar2 == 0) {
    uVar8 = DAT_020de648;
    if (uVar8 != 0) {
      out = (int *)DAT_020de650;
      uVar10 = uVar8 * 0x10;
      lVar9 = -1;
      do {
        uVar10 = uVar10 - 0x10;
        if (*out == iVar12) {
          if ((ulong)-lVar9 < uVar8) {
            recovered_2001850(out,out + 4,uVar10);
            uVar8 = DAT_020de648;
          }
          DAT_020de648 = uVar8 - 1;
          break;
        }
        out = out + 4;
        lVar1 = uVar8 + lVar9;
        lVar9 = lVar9 + -1;
      } while (lVar1 != 0);
    }
    *param_2 = 0;
  }
LAB_020994d8:
  recovered_205ec00((undefined8 *)param_1);
  return '\0';
}
