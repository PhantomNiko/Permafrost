/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c5084 (*(uint8_t *)(0x20c5084U))
#define DAT_020c5119 (*(uint8_t *)(0x20c5119U))
#define DAT_020c531e (*(uint8_t *)(0x20c531eU))
#define DAT_020c5359 (*(uint8_t *)(0x20c5359U))
#define DAT_020cc533 (*(uint8_t *)(0x20cc533U))
#define DAT_020d9d6a (*(uint8_t volatile *)(0x20d9d6aU))
#define DAT_020d9d6b (*(uint8_t volatile *)(0x20d9d6bU))
#define DAT_020d9d6c (*(uint32_t volatile *)(0x20d9d6cU))
#define DAT_020d9d70 (*(uint32_t volatile *)(0x20d9d70U))
#define DAT_020d9db4 (*(uint8_t volatile *)(0x20d9db4U))
#define DAT_020d9f05 (*(uint8_t volatile *)(0x20d9f05U))
#define DAT_020d9ff6 (*(uint8_t volatile *)(0x20d9ff6U))
#define DAT_020da0e7 (*(uint8_t volatile *)(0x20da0e7U))
#define Ram020d9d6a (*(uint16_t volatile *)(0x20d9d6aU))
#define str_020c5bc0 (*(char (*)[1])(0x20c5bc0U))
#define str_020c5bd6 (*(char (*)[1])(0x20c5bd6U))
#define str_020c5be7 (*(char (*)[1])(0x20c5be7U))
#define str_020cc51e (*(char (*)[1])(0x20cc51eU))
#define str_020cc527 (*(char (*)[1])(0x20cc527U))
#define str_020cc535 (*(char (*)[1])(0x20cc535U))
#define str_020d9e14 (*(char volatile (*)[1])(0x20d9e14U))
#define str_020de0ec (*(char volatile (*)[1])(0x20de0ecU))
#define format (*(char * *)(frame + 28))


void recovered_205ebf0(void)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  char cVar1;
  int iVar2;
  char *vararg0;
  char *pcVar3;
  undefined *vararg0_00;

  Ram020d9d6a = 0;
  DAT_020d9d70 = 0;
  DAT_020d9f05 = 0;
  DAT_020d9ff6 = 0;
  DAT_020da0e7 = 0;
  iVar2 = DAT_020d9d6c;
  if (iVar2 == 0) {
    cVar1 = str_020d9e14[0];
    pcVar3 = &DAT_020c5359;
    if (cVar1 != '\0') {
      pcVar3 = str_020d9e14;
    }
    cVar1 = DAT_020d9db4;
    vararg0_00 = &DAT_020c531e;
    if (cVar1 != '\0') {
      vararg0_00 = &DAT_020d9db4;
    }
    pf_varargs_20044f0__4__4_(str_020de0ec,0x60,str_020cc535,(uint)vararg0_00,(uint)pcVar3);
    return;
  }
  iVar2 = DAT_020d9d6c;
  if (iVar2 == 3) {
    pcVar3 = str_020c5be7;
  }
  else if (iVar2 == 2) {
    pcVar3 = str_020c5bd6;
  }
  else {
    if (iVar2 != 1) {
      cVar1 = DAT_020d9d6a;
      if (cVar1 == '\x01') {
        cVar1 = DAT_020d9f05;
        vararg0 = str_020cc51e;
        if (cVar1 != '\0') {
          vararg0 = &DAT_020d9f05;
        }
        pcVar3 = &DAT_020cc533;
        cVar1 = DAT_020d9d6b;
        if (cVar1 == '\0') {
          pcVar3 = &DAT_020c5084;
        }
        format = str_020cc527;
      }
      else {
        cVar1 = str_020d9e14[0];
        pcVar3 = &DAT_020c5359;
        if (cVar1 != '\0') {
          pcVar3 = str_020d9e14;
        }
        cVar1 = DAT_020d9db4;
        vararg0 = &DAT_020c531e;
        if (cVar1 != '\0') {
          vararg0 = &DAT_020d9db4;
        }
        format = str_020cc535;
      }
      pf_varargs_20044f0__4__4_(str_020de0ec,0x60,format,(uint)vararg0,(uint)pcVar3);
      return;
    }
    pcVar3 = str_020c5bc0;
  }
  pf_varargs_20044f0__4_(str_020de0ec,0x60,&DAT_020c5119,(uint)pcVar3);
  return;
}
#undef DAT_020c5084
#undef DAT_020c5119
#undef DAT_020c531e
#undef DAT_020c5359
#undef DAT_020cc533
#undef DAT_020d9d6a
#undef DAT_020d9d6b
#undef DAT_020d9d6c
#undef DAT_020d9d70
#undef DAT_020d9db4
#undef DAT_020d9f05
#undef DAT_020d9ff6
#undef DAT_020da0e7
#undef Ram020d9d6a
#undef str_020c5bc0
#undef str_020c5bd6
#undef str_020c5be7
#undef str_020cc51e
#undef str_020cc527
#undef str_020cc535
#undef str_020d9e14
#undef str_020de0ec
#undef format
