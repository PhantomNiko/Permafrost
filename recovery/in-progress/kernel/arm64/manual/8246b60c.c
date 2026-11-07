/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_40494958 (*(uint64_t volatile *)(0x8266eec8U))
#define DAT_40494960 (*(uint64_t volatile *)(0x8266eed0U))
ulong recovered_8246b60c(byte *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;

  lVar5 = 0;
  uVar4 = 0;
  uVar3 = DAT_40494960;
  do {
    if (uVar3 <= uVar4) {
      return 0xffffffff;
    }
    lVar1 = DAT_40494958;
    if ((*(char *)(lVar1 + lVar5 + 0x48) == '\x01') && (*(char **)(lVar1 + lVar5) != (char *)0x0)) {
      iVar2 = recovered_82400e0c(*(char **)(lVar1 + lVar5),(char *)param_1);
      if (iVar2 == 0) {
        return uVar4;
      }
      uVar3 = DAT_40494960;
    }
    uVar4 = uVar4 + 1;
    lVar5 = lVar5 + 0x50;
  } while( true );
}
