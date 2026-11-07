/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4044e204 (*(uint8_t *)(0x82473985U))
bool recovered_82453570(undefined4 *param_1,undefined1 *param_2,long param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  bool bVar2;
  long lVar3;

  bVar2 = false;
  if (param_1 != (undefined4 *)0x0) {
    puVar1 = &DAT_4044e204;
    if (param_2 != (undefined1 *)0x0) {
      puVar1 = param_2;
    }
    lVar3 = recovered_8244a904((long)puVar1,param_3);
    bVar2 = lVar3 != 0;
    if (bVar2) {
      recovered_8243166c((undefined8 *)param_1);
      *param_1 = 3;
      *(long *)(param_1 + 4) = lVar3;
    }
  }
  return bVar2;
}
