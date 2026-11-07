/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4044e204 (*(uint8_t *)(0x82473985U))
bool recovered_8241ba84(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char *pcVar2;
  bool bVar3;

  pcVar1 = &DAT_4044e204;
  if ((char *)*param_1 != (char *)0x0) {
    pcVar1 = (char *)*param_1;
  }
  pcVar2 = &DAT_4044e204;
  if ((char *)*param_2 != (char *)0x0) {
    pcVar2 = (char *)*param_2;
  }
  bVar3 = recovered_8241baac(pcVar1,param_1[1],pcVar2,param_2[1]);
  return bVar3;
}
