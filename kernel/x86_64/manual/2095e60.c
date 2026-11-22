/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020de620 (*(uint64_t volatile *)(0x226c270U))
#define DAT_020de628 (*(uint64_t volatile *)(0x226c278U))
#define DAT_020de630 (*(uint64_t volatile *)(0x226c280U))
#define local_31 (*(uchar *)(frame + 47))
#define local_40 (*(ulong *)(frame + 32))
#define local_48 (*(ulong *)(frame + 24))
#define local_50 (*(long *)(frame + 16))
uchar recovered_2095e60(long param_1,ulong param_2)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  void *buffer;
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;

  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_31 = recovered_2095f20(param_1,param_2,&local_50,&local_48,&local_40);
  uVar4 = local_40;
  uVar3 = local_48;
  lVar2 = local_50;
  if (local_31 != '\0') {
    buffer = (void *)DAT_020de620;
    if (buffer != (void *)0x0) {
      lVar1 = DAT_020de628;
      if (lVar1 != 0) {
        lVar5 = 0;
        do {
          recovered_2000bb0(*(void **)((long)buffer + lVar5 * 8));
          *(undefined8 *)((long)buffer + lVar5 * 8) = 0;
          lVar5 = lVar5 + 1;
        } while (lVar1 != lVar5);
      }
      recovered_2000bb0(buffer);
    }
    DAT_020de620 = lVar2;
    DAT_020de628 = uVar3;
    DAT_020de630 = uVar4;
  }
  return local_31;
}
