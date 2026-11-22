/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define auStack_38 (*(ulong (*)[2])(frame + 24))
#define puStack_28 (*(undefined8 * *)(frame + 40))
bool recovered_8244c970(long param_1,byte *param_2)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  uVar2 = recovered_8244c9fc(param_1,auStack_38);
  bVar1 = false;
  if (((int)uVar2 != 0) && (auStack_38[0] != 0)) {
    bVar1 = recovered_8244ccd4((byte *)*puStack_28,param_2);
    recovered_8244cc8c(auStack_38);
  }
  return bVar1;
}
