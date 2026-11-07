/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020ae0e0 (*(uint8_t volatile *)(0x210cc70U))
#define DAT_020ae0e1 (*(uint8_t volatile *)(0x210cc71U))
#define DAT_020ae0e2 (*(uint16_t volatile *)(0x210cc72U))
#define DAT_020ae0e4 (*(uint8_t volatile *)(0x210cc74U))
#define DAT_020ae0e5 (*(uint8_t volatile *)(0x210cc75U))
#define DAT_020ce7e0 (*(uint64_t volatile *)(0x212dc70U))
#define local_20 (*(undefined1 (*)[16])(frame + 16))
uint recovered_2008520(void)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  long lVar1;
  char cVar2;

  lVar1 = DAT_020ce7e0;
  if (lVar1 == 0) {
    recovered_2002110(local_20,0,0x10);
    lVar1 = cpuid_Version_info(1);
    cVar2 = (char)((uint)*(undefined4 *)(lVar1 + 4) >> 0x18);
  }
  else {
    cVar2 = (char)((uint)*(undefined4 *)(lVar1 + 0x20) >> 0x18);
  }
  lVar1 = 0;
  do {
    if (((&DAT_020ae0e1)[lVar1 * 4] != '\0') && ((&DAT_020ae0e0)[lVar1 * 4] == cVar2)) {
LAB_02005cce:
      return (uint)*(byte *)((long)&DAT_020ae0e2 + lVar1 * 4 + 1);
    }
    if (((&DAT_020ae0e5)[lVar1 * 4] != '\0') && ((&DAT_020ae0e4)[lVar1 * 4] == cVar2)) {
      lVar1 = lVar1 + 1;
      goto LAB_02005cce;
    }
    lVar1 = lVar1 + 2;
    if (lVar1 == 0x20) {
      return 0;
    }
  } while( true );
}
