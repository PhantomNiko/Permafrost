/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020cccb7 (*(uint8_t *)(0x20cccb7U))
#define DAT_020cccba (*(uint8_t *)(0x20cccbaU))
#define str_020ccc96 (*(char (*)[1])(0x20ccc96U))
#define str_020ccc9c (*(char (*)[1])(0x20ccc9cU))
#define str_020ccca4 (*(char (*)[1])(0x20ccca4U))
#define str_020cccae (*(char (*)[1])(0x20cccaeU))


bool recovered_2038fb0(char *in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  int iVar2;
  char *pcVar3;

  pcVar3 = (char *)0x0;
  if (in_ECX != (char *)0x0) {
    pcVar1 = in_ECX;
    do {
      if (*pcVar1 == '/') {
        pcVar3 = pcVar1;
      }
      else if (*pcVar1 == '\0') goto code_r0x02038fdf;
      pcVar1 = pcVar1 + 1;
    } while( true );
  }
LAB_0203906d:
  return SUB41(pcVar3,0);
code_r0x02038fdf:
  if ((pcVar3 != (char *)0x0) && (pcVar3[1] != '\0')) {
    in_ECX = pcVar3 + 1;
  }
  iVar2 = recovered_20022a0(in_ECX,str_020ccc96);
  pcVar3 = (char *)0x1;
  if (iVar2 != 0) {
    iVar2 = recovered_20022a0(in_ECX,str_020ccc9c);
    if (iVar2 != 0) {
      iVar2 = recovered_20022a0(in_ECX,str_020ccca4);
      if (iVar2 != 0) {
        iVar2 = recovered_20022a0(in_ECX,str_020cccae);
        if (iVar2 != 0) {
          iVar2 = recovered_20022a0(in_ECX,&DAT_020cccb7);
          if (iVar2 != 0) {
            iVar2 = recovered_20022a0(in_ECX,&DAT_020cccba);
            pcVar3 = (char *)(uint)(iVar2 == 0);
          }
        }
      }
    }
  }
  goto LAB_0203906d;
}
#undef DAT_020cccb7
#undef DAT_020cccba
#undef str_020ccc96
#undef str_020ccc9c
#undef str_020ccca4
#undef str_020cccae
