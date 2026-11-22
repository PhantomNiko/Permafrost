/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c5119 (*(uint8_t *)(0x20c5119U))
#define DAT_0223b6fc (*(uint32_t volatile *)(0x223b6fcU))
#define DAT_0223dafd (*(uint8_t volatile *)(0x223dafdU))
#define DAT_0223db04 (*(uint32_t volatile *)(0x223db04U))
#define DAT_0223db08 (*(uint8_t volatile *)(0x223db08U))
#define str_020ca1b2 (*(char (*)[1])(0x20ca1b2U))
#define str_020cbd3f (*(char (*)[1])(0x20cbd3fU))
#define str_020cbd49 (*(char (*)[1])(0x20cbd49U))
#define local_408 (*(char (*)[1024])(frame + 24))


undefined4 recovered_2072110(int param_1)

{
  unsigned char frame[1088] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;
  char *vararg0;

  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    recovered_2001e00(&DAT_0223db04,0,0xf8);
    DAT_0223db04 = param_1;
    iVar1 = DAT_0223b6fc;
    vararg0 = str_020ca1b2;
    if (iVar1 != 0) {
      vararg0 = (char *)(iVar1 + 0x48);
    }
    pf_varargs_20044f0__4_(&DAT_0223db08,0xf1,&DAT_020c5119,(uint)vararg0);
    DAT_0223dafd = 1;
    pf_varargs_20044f0__4_(local_408,0x400,str_020cbd3f,0x223db08);
    recovered_206cc70(str_020cbd49,0x20cbd67,(int)local_408);
    recovered_206de50(str_020cbd49,0x20cbd67,(int)local_408);
    uVar2 = 1;
  }
  return uVar2;
}
#undef DAT_020c5119
#undef DAT_0223b6fc
#undef DAT_0223dafd
#undef DAT_0223db04
#undef DAT_0223db08
#undef str_020ca1b2
#undef str_020cbd3f
#undef str_020cbd49
#undef local_408
