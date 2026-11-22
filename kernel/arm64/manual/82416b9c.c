/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define PTR_recovered_40411dc4_404590e0 (*(void * *)(0x824850e0U))
#define PTR_recovered_4041437c_40459160 (*(void * *)(0x82485160U))
#define _DAT_4044de60 (*(uint64_t *)(0x82472ff0U))
#define lRam000000004044de68 (*(uint64_t *)(0x82472ff8U))
#define local_50 (*(ulong *)(frame + 32))
#define pcStack_58 (*(char * *)(frame + 24))
undefined8 * recovered_82416b9c(undefined4 param_1,long param_2,long param_3)

{
  unsigned char frame[144] __attribute__((aligned(16))) = {0};

  uint uVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;

  if (param_2 == 0) {
    return (undefined8 *)0x0;
  }
  if (param_3 == 0) {
    return (undefined8 *)0x0;
  }
  recovered_82416740(&pcStack_58,(undefined1 *)param_2,(undefined1 *)(param_2 + param_3));
  if (local_50 < 4) {
LAB_40410f98:
    if (local_50 != 0) {
LAB_40410f9c:
      if ((*pcStack_58 == -0x80) || (*pcStack_58 == '%')) {
        plVar2 = recovered_8240fa98(0x1890);
        recovered_82400bac((undefined1 *)(plVar2 + 4),0x1870);
        *plVar2 = (long)&PTR_recovered_4041437c_40459160;
        lVar5 = _DAT_4044de60;
        plVar2[2] = lRam000000004044de68;
        plVar2[1] = lVar5;
        plVar2[3] = 0x4069000000000000;
        *(undefined4 *)(plVar2 + 4) = 4;
        lVar5 = -0x1800;
        do {
          *(undefined8 *)((long)plVar2 + lVar5 + 0x1828) = 0;
          *(undefined8 *)((long)plVar2 + lVar5 + 0x1838) = 0;
          *(undefined8 *)((long)plVar2 + lVar5 + 0x1830) = 0;
          lVar5 = lVar5 + 0x18;
        } while (lVar5 != 0);
        plVar2[0x305] = 0;
        plVar2[0x307] = 0;
        plVar2[0x306] = 0;
        recovered_8241ae44(plVar2 + 0x308);
        uVar4 = (**(code **)(*plVar2 + 0x10))(plVar2,&pcStack_58);
        if ((uVar4 & 1) != 0) goto LAB_4041103c;
        (**(code **)(*plVar2 + 8))(plVar2);
      }
    }
    puVar3 = (undefined8 *)0x0;
  }
  else {
    uVar1 = recovered_82417a5c((long *)&pcStack_58,0);
    if ((uVar1 != 0x74727565) && (uVar1 != 0x10000)) goto LAB_40410f9c;
    plVar2 = recovered_8240fa98(0x150);
    recovered_82400bac((undefined1 *)(plVar2 + 0xc),0xf0);
    *plVar2 = (long)&PTR_recovered_40411dc4_404590e0;
    plVar2[1] = 0;
    plVar2[3] = 0;
    plVar2[2] = 0;
    plVar2[4] = 0;
    plVar2[6] = 0;
    plVar2[5] = 0;
    plVar2[7] = 0;
    plVar2[9] = 0;
    plVar2[8] = 0;
    plVar2[0xb] = 0;
    plVar2[10] = 0;
    *(undefined4 *)(plVar2 + 0xf) = 0;
    *(undefined4 *)(plVar2 + 0x11) = 0;
    *(undefined4 *)(plVar2 + 0x13) = 0;
    *(undefined2 *)(plVar2 + 0x15) = 0;
    *(undefined2 *)(plVar2 + 0x16) = 0;
    plVar2[0x18] = 0;
    *(undefined2 *)((long)plVar2 + 0xd6) = 0;
    *(undefined2 *)((long)plVar2 + 0xde) = 0;
    plVar2[0x1e] = 0;
    recovered_824185ec(plVar2 + 0x20);
    uVar4 = (**(code **)(*plVar2 + 0x10))(plVar2,&pcStack_58);
    if ((uVar4 & 1) == 0) {
      (**(code **)(*plVar2 + 8))(plVar2);
      goto LAB_40410f98;
    }
LAB_4041103c:
    puVar3 = recovered_8240fa98(0x60);
    puVar3[2] = 0;
    puVar3[1] = 0;
    puVar3[0xb] = 0;
    puVar3[10] = 0;
    puVar3[9] = 0;
    puVar3[8] = 0;
    puVar3[7] = 0;
    puVar3[6] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[3] = 0;
    *puVar3 = plVar2;
    *(undefined4 *)(puVar3 + 1) = param_1;
  }
  local_50 = 0;
  recovered_8240facc(pcStack_58);
  return puVar3;
}
