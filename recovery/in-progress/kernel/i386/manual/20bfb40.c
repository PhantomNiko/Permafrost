/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_0208fe85 (*(uint8_t *)(0x20cd47cU))
#define local_408 (*(char * *)(frame + 24))
#define local_410 (*(char (*)[8])(frame + 16))
#define str_02097730 (*(char (*)[1])(0x20d7095U))
void recovered_20bfb40(int incoming_ecx,uint incoming_edx)

{
  unsigned char frame[1088] __attribute__((aligned(16))) = {0};

  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;

  if (incoming_ecx == 0) {
    uVar4 = 0;
    pcVar3 = &DAT_0208fe85;
    while( true ) {
      do {
        pcVar6 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar6;
      } while (cVar1 == '\r');
      if (cVar1 == '\0') break;
      if (cVar1 == '\n') {
        recovered_20a11d0(local_410,uVar4,1,'\x01');
        uVar4 = 0;
      }
      else if (uVar4 + 1 < 0x400) {
        local_410[uVar4] = cVar1;
        uVar4 = uVar4 + 1;
      }
    }
    recovered_20a11d0(local_410,uVar4,1,'\x01');
    return;
  }
  local_410[0] = '\0';
  local_410[1] = '\0';
  local_410[2] = '\0';
  local_410[3] = '\0';
  local_410[4] = '\0';
  local_410[5] = '\0';
  local_410[6] = '\0';
  local_410[7] = '\0';
  local_408 = (char *)0x0;
  uVar2 = recovered_2086030((int *)incoming_ecx,(int)local_410,0);
  if ((char)uVar2 == '\0') {
    recovered_2001710(local_408);
LAB_020891ca:
    uVar4 = 0;
    pcVar3 = str_02097730;
    while( true ) {
      do {
        pcVar6 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar6;
      } while (cVar1 == '\r');
      if (cVar1 == '\0') break;
      if (cVar1 == '\n') {
        recovered_20a11d0(local_410,uVar4,1,'\x01');
        uVar4 = 0;
      }
      else if (uVar4 + 1 < 0x400) {
        local_410[uVar4] = cVar1;
        uVar4 = uVar4 + 1;
      }
    }
    recovered_20a11d0(local_410,uVar4,1,'\x01');
    pcVar3 = (char *)0x0;
  }
  else {
    pcVar3 = local_408;
    if (local_408 == (char *)0x0) {
      pcVar3 = recovered_2001650(1);
      if (pcVar3 == (char *)0x0) goto LAB_020891ca;
      *pcVar3 = '\0';
    }
    uVar4 = 0;
    pcVar6 = pcVar3;
    while( true ) {
      do {
        pcVar5 = pcVar6 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar5;
      } while (cVar1 == '\r');
      if (cVar1 == '\0') break;
      if (cVar1 == '\n') {
        recovered_20a11d0(local_410,uVar4,1,'\x01');
        uVar4 = 0;
      }
      else if (uVar4 + 1 < 0x400) {
        local_410[uVar4] = cVar1;
        uVar4 = uVar4 + 1;
      }
    }
    recovered_20a11d0(local_410,uVar4,1,'\x01');
  }
  recovered_2001710(pcVar3);
  return;
}
