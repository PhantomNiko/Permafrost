/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020d9b78 (*(uint32_t *)(0x20d9b78U))
#define str_020d370e (*(char (*)[1])(0x20d370eU))
#define str_020d3718 (*(char (*)[1])(0x20d3718U))
#define str_020d3726 (*(char (*)[1])(0x20d3726U))
#define str_020d3730 (*(char (*)[1])(0x20d3730U))
#define str_020d3739 (*(char (*)[1])(0x20d3739U))
#define str_020d3743 (*(char (*)[1])(0x20d3743U))
#define str_020d374a (*(char (*)[1])(0x20d374aU))
#define str_020d3752 (*(char (*)[1])(0x20d3752U))
#define str_020d375a (*(char (*)[1])(0x20d375aU))
#define str_020d3762 (*(char (*)[1])(0x20d3762U))


undefined4 recovered_20b5d30(char *in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int iVar2;

  uVar1 = 10;
  if (in_ECX != (char *)0x0) {
    iVar2 = recovered_20022a0(in_ECX,str_020d370e);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = recovered_20022a0(in_ECX,str_020d3718);
      if (iVar2 == 0) {
        iVar2 = 1;
      }
      else {
        iVar2 = recovered_20022a0(in_ECX,str_020d3726);
        if (iVar2 == 0) {
          iVar2 = 2;
        }
        else {
          iVar2 = recovered_20022a0(in_ECX,str_020d3730);
          if (iVar2 == 0) {
            iVar2 = 3;
          }
          else {
            iVar2 = recovered_20022a0(in_ECX,str_020d3739);
            if (iVar2 == 0) {
              iVar2 = 4;
            }
            else {
              iVar2 = recovered_20022a0(in_ECX,str_020d3743);
              if (iVar2 == 0) {
                iVar2 = 5;
              }
              else {
                iVar2 = recovered_20022a0(in_ECX,str_020d374a);
                if (iVar2 == 0) {
                  iVar2 = 6;
                }
                else {
                  iVar2 = recovered_20022a0(in_ECX,str_020d3752);
                  if (iVar2 == 0) {
                    iVar2 = 7;
                  }
                  else {
                    iVar2 = recovered_20022a0(in_ECX,str_020d375a);
                    if (iVar2 == 0) {
                      iVar2 = 8;
                    }
                    else {
                      iVar2 = recovered_20022a0(in_ECX,str_020d3762);
                      if (iVar2 != 0) {
                        return 10;
                      }
                      iVar2 = 9;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    uVar1 = (&DAT_020d9b78)[iVar2 * 2];
  }
  return uVar1;
}
#undef DAT_020d9b78
#undef str_020d370e
#undef str_020d3718
#undef str_020d3726
#undef str_020d3730
#undef str_020d3739
#undef str_020d3743
#undef str_020d374a
#undef str_020d3752
#undef str_020d375a
#undef str_020d3762
