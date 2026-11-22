/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_40494753 (*(uint8_t volatile *)(0x8266ec2cU))
#define DAT_4049479c (*(uint32_t volatile *)(0x8266ec8cU))
#define DAT_404947a0 (*(uint32_t volatile *)(0x8266ec90U))
bool recovered_82459d88(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;

  cVar1 = DAT_40494753;
  if (cVar1 != '\x01') {
    return false;
  }
  bVar4 = recovered_82430af8();
  bVar3 = false;
  if ((bVar4) && (iVar2 = DAT_4049479c, iVar2 != 0)) {
    iVar2 = DAT_404947a0;
    bVar3 = iVar2 != 0;
  }
  return bVar3;
}
