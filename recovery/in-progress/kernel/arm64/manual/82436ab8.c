/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_40494780 (*(uint32_t volatile *)(0x8266ec60U))
#define DAT_40494788 (*(uint32_t volatile *)(0x8266ec68U))
#define DAT_40494790 (*(uint32_t volatile *)(0x8266ec70U))
#define DAT_40494798 (*(uint32_t volatile *)(0x8266ec78U))
#define DAT_404947f8 (*(uint64_t volatile *)(0x8266ed20U))
ulonglong recovered_82436ab8(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  uint uVar3;
  void *in_x0;
  void *out;
  void *pvVar4;

  DAT_40494798 = 0;
  iVar1 = DAT_40494790;
  uVar3 = DAT_40494780;
  if (iVar1 + 1U < uVar3) {
    DAT_40494790 = iVar1 + 1U;
  }
  else if (((uVar3 != 0) && (in_x0 = (void *)DAT_404947f8, in_x0 != (void *)0x0)) &&
          (uVar2 = DAT_40494788, uVar2 != 0)) {
    if (uVar3 < 2) {
      uVar3 = 0;
    }
    else {
      recovered_82400a00(in_x0,(void *)((long)in_x0 + (ulong)uVar2 + 1),
                         ((ulong)uVar2 + 1) * (ulong)(uVar3 - 1));
      iVar1 = DAT_40494780;
      uVar3 = iVar1 - 1;
    }
    out = (void *)recovered_824358d8(uVar3);
    pvVar4 = (void *)0x0;
    if (out != (void *)0x0) {
      uVar3 = DAT_40494788;
      pvVar4 = recovered_82400b14(out,0x20,(ulong)uVar3);
      uVar3 = DAT_40494788;
      *(undefined1 *)((long)out + (ulong)uVar3) = 0;
    }
    return (ulonglong)pvVar4;
  }
  return (ulonglong)in_x0;
}
