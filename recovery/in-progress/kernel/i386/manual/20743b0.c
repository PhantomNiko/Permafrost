/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c5082 (*(uint8_t *)(0x20c5082U))
#define DAT_020c5084 (*(uint8_t *)(0x20c5084U))
#define DAT_020c5ad8 (*(uint8_t *)(0x20c5ad8U))
#define str_020ccc8b (*(char (*)[1])(0x20ccc8bU))


char * recovered_20743b0(char *in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char *left;
  int iVar2;
  char *pcVar3;

  left = &DAT_020c5084;
  if (in_ECX != (char *)0x0) {
    left = in_ECX;
  }
  pcVar1 = (char *)0x0;
  pcVar3 = left;
  do {
    if (*pcVar3 == '/') {
      pcVar1 = pcVar3;
    }
    else if (*pcVar3 == '\0') {
      if ((pcVar1 != (char *)0x0) && (pcVar1[1] != '\0')) {
        left = pcVar1 + 1;
      }
      pcVar1 = str_020ccc8b;
      if (*left != '\0') {
        iVar2 = recovered_20022a0(left,&DAT_020c5082);
        if (iVar2 != 0) {
          iVar2 = recovered_20022a0(left,&DAT_020c5ad8);
          if (iVar2 != 0) {
            pcVar1 = left;
          }
        }
      }
      return pcVar1;
    }
    pcVar3 = pcVar3 + 1;
  } while( true );
}
#undef DAT_020c5082
#undef DAT_020c5084
#undef DAT_020c5ad8
#undef str_020ccc8b
