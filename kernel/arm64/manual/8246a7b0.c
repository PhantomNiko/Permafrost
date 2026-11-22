/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define acStack_1c0 (*(char (*)[384])(frame + 16))
#define uStack0000000000000000 (*(undefined1 *)(frame + 464))
undefined8 recovered_8246a7b0(long param_1,long param_2)

{
  unsigned char frame[496] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  char *out;
  ulong count;

  if (param_1 == 0) {
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  uVar2 = recovered_82401998(acStack_1c0,0x180,(char *)param_2,&uStack0000000000000000);
  if (-1 < (int)uVar2) {
    count = (ulong)uVar2;
    if (uVar2 < 0x180) {
      bVar1 = recovered_824531b8((long *)param_1,acStack_1c0,count);
      return (ulong)bVar1;
    }
    out = recovered_82400744(count + 1);
    if (out != (char *)0x0) {
      recovered_82401998(out,count + 1,(char *)param_2,&uStack0000000000000000);
      bVar1 = recovered_824531b8((long *)param_1,out,count);
      recovered_82400748(out);
      return (ulong)bVar1;
    }
  }
  return 0;
}
