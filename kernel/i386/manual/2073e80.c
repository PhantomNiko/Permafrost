/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020cc4df (*(uint8_t *)(0x20cc4dfU))
#define str_020cc46f (*(char (*)[1])(0x20cc46fU))
#define str_020cc477 (*(char (*)[1])(0x20cc477U))
#define str_020cc485 (*(char (*)[1])(0x20cc485U))
#define str_020cc48c (*(char (*)[1])(0x20cc48cU))
#define str_020cc49f (*(char (*)[1])(0x20cc49fU))
#define str_020cc4b0 (*(char (*)[1])(0x20cc4b0U))
#define str_020cc4c3 (*(char (*)[1])(0x20cc4c3U))
#define str_020cc4e8 (*(char (*)[1])(0x20cc4e8U))
#define str_020cc4f8 (*(char (*)[1])(0x20cc4f8U))
#define str_020cc50a (*(char (*)[1])(0x20cc50aU))


void recovered_2073e80(char *in_ECX,uint in_EDX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;

  pf_varargs_202ecc0__4_(in_ECX,in_EDX,str_020cc46f,0x20d9db4);
  pf_varargs_202ecc0__4_(in_ECX,in_EDX,str_020cc477,0x20d9db4);
  pf_varargs_202ecc0__4_(in_ECX,in_EDX,str_020cc485,0x20d9e14);
  if (in_EDX != 0 && in_ECX != (char *)0x0) {
    if (*in_ECX != '\0') {
      uVar2 = recovered_2002270(in_ECX);
      if (uVar2 + 1 < in_EDX) {
        (in_ECX + uVar2)[0] = '\n';
        (in_ECX + uVar2)[1] = '\0';
      }
    }
    uVar2 = recovered_2002270(in_ECX);
    if (uVar2 + 1 < in_EDX) {
      cVar3 = 'P';
      iVar4 = 0;
      do {
        in_ECX[iVar4 + uVar2] = cVar3;
        cVar3 = str_020cc48c[iVar4 + 1];
        iVar1 = iVar4 + 1;
        if (cVar3 == '\0') break;
        uVar5 = iVar4 + uVar2 + 2;
        iVar4 = iVar1;
      } while (uVar5 < in_EDX);
      in_ECX[iVar1 + uVar2] = '\0';
    }
    if (*in_ECX != '\0') {
      uVar2 = recovered_2002270(in_ECX);
      if (uVar2 + 1 < in_EDX) {
        (in_ECX + uVar2)[0] = '\n';
        (in_ECX + uVar2)[1] = '\0';
      }
    }
    uVar2 = recovered_2002270(in_ECX);
    if (uVar2 + 1 < in_EDX) {
      cVar3 = 'S';
      iVar4 = 0;
      do {
        in_ECX[iVar4 + uVar2] = cVar3;
        cVar3 = str_020cc49f[iVar4 + 1];
        iVar1 = iVar4 + 1;
        if (cVar3 == '\0') break;
        uVar5 = iVar4 + uVar2 + 2;
        iVar4 = iVar1;
      } while (uVar5 < in_EDX);
      in_ECX[iVar1 + uVar2] = '\0';
    }
    if (*in_ECX != '\0') {
      uVar2 = recovered_2002270(in_ECX);
      if (uVar2 + 1 < in_EDX) {
        (in_ECX + uVar2)[0] = '\n';
        (in_ECX + uVar2)[1] = '\0';
      }
    }
    uVar2 = recovered_2002270(in_ECX);
    if (uVar2 + 1 < in_EDX) {
      cVar3 = 'C';
      iVar4 = 0;
      do {
        in_ECX[iVar4 + uVar2] = cVar3;
        cVar3 = str_020cc4b0[iVar4 + 1];
        iVar1 = iVar4 + 1;
        if (cVar3 == '\0') break;
        uVar5 = iVar4 + uVar2 + 2;
        iVar4 = iVar1;
      } while (uVar5 < in_EDX);
      in_ECX[iVar1 + uVar2] = '\0';
    }
    if (*in_ECX != '\0') {
      uVar2 = recovered_2002270(in_ECX);
      if (uVar2 + 1 < in_EDX) {
        (in_ECX + uVar2)[0] = '\n';
        (in_ECX + uVar2)[1] = '\0';
      }
    }
    uVar2 = recovered_2002270(in_ECX);
    if (uVar2 + 1 < in_EDX) {
      cVar3 = 'L';
      iVar4 = 0;
      do {
        in_ECX[iVar4 + uVar2] = cVar3;
        cVar3 = str_020cc4c3[iVar4 + 1];
        iVar1 = iVar4 + 1;
        if (cVar3 == '\0') break;
        uVar5 = iVar4 + uVar2 + 2;
        iVar4 = iVar1;
      } while (uVar5 < in_EDX);
      in_ECX[iVar1 + uVar2] = '\0';
    }
    if (*in_ECX != '\0') {
      uVar2 = recovered_2002270(in_ECX);
      if (uVar2 + 1 < in_EDX) {
        (in_ECX + uVar2)[0] = '\n';
        (in_ECX + uVar2)[1] = '\0';
      }
    }
    uVar2 = recovered_2002270(in_ECX);
    if (uVar2 + 1 < in_EDX) {
      cVar3 = 'S';
      iVar4 = 0;
      do {
        in_ECX[iVar4 + uVar2] = cVar3;
        cVar3 = (&DAT_020cc4df)[iVar4];
        iVar1 = iVar4 + 1;
        if (cVar3 == '\0') break;
        uVar5 = iVar4 + uVar2 + 2;
        iVar4 = iVar1;
      } while (uVar5 < in_EDX);
      in_ECX[iVar1 + uVar2] = '\0';
    }
    if (*in_ECX != '\0') {
      uVar2 = recovered_2002270(in_ECX);
      if (uVar2 + 1 < in_EDX) {
        (in_ECX + uVar2)[0] = '\n';
        (in_ECX + uVar2)[1] = '\0';
      }
    }
    uVar2 = recovered_2002270(in_ECX);
    if (uVar2 + 1 < in_EDX) {
      cVar3 = 'T';
      iVar4 = 0;
      do {
        in_ECX[iVar4 + uVar2] = cVar3;
        cVar3 = str_020cc4e8[iVar4 + 1];
        iVar1 = iVar4 + 1;
        if (cVar3 == '\0') break;
        uVar5 = iVar4 + uVar2 + 2;
        iVar4 = iVar1;
      } while (uVar5 < in_EDX);
      in_ECX[iVar1 + uVar2] = '\0';
    }
    if (*in_ECX != '\0') {
      uVar2 = recovered_2002270(in_ECX);
      if (uVar2 + 1 < in_EDX) {
        (in_ECX + uVar2)[0] = '\n';
        (in_ECX + uVar2)[1] = '\0';
      }
    }
    uVar2 = recovered_2002270(in_ECX);
    if (uVar2 + 1 < in_EDX) {
      cVar3 = 'T';
      iVar4 = 0;
      do {
        in_ECX[iVar4 + uVar2] = cVar3;
        cVar3 = str_020cc4f8[iVar4 + 1];
        iVar1 = iVar4 + 1;
        if (cVar3 == '\0') break;
        uVar5 = iVar4 + uVar2 + 2;
        iVar4 = iVar1;
      } while (uVar5 < in_EDX);
      in_ECX[iVar1 + uVar2] = '\0';
    }
    if (*in_ECX != '\0') {
      uVar2 = recovered_2002270(in_ECX);
      if (uVar2 + 1 < in_EDX) {
        (in_ECX + uVar2)[0] = '\n';
        (in_ECX + uVar2)[1] = '\0';
      }
    }
    uVar2 = recovered_2002270(in_ECX);
    if (uVar2 + 1 < in_EDX) {
      cVar3 = 'T';
      iVar4 = 0;
      do {
        in_ECX[iVar4 + uVar2] = cVar3;
        cVar3 = str_020cc50a[iVar4 + 1];
        iVar1 = iVar4 + 1;
        if (cVar3 == '\0') break;
        uVar5 = iVar4 + uVar2 + 2;
        iVar4 = iVar1;
      } while (uVar5 < in_EDX);
      in_ECX[iVar1 + uVar2] = '\0';
    }
  }
  return;
}
#undef DAT_020cc4df
#undef str_020cc46f
#undef str_020cc477
#undef str_020cc485
#undef str_020cc48c
#undef str_020cc49f
#undef str_020cc4b0
#undef str_020cc4c3
#undef str_020cc4e8
#undef str_020cc4f8
#undef str_020cc50a
