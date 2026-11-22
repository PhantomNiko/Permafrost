/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c5119 (*(uint8_t *)(0x20c5119U))
#define local_13 (*(undefined1 (*)[3])(frame + 29))


bool recovered_2072420(char *in_ECX,char *in_EDX,char *param_3,char *param_4)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  char cVar1;
  ulong uVar2;
  ulong uVar3;
  char *data;
  int iVar4;

  data = in_ECX;
  if (param_4 == (char *)0x0 ||
      (param_3 == (char *)0x0 || (in_EDX == (char *)0x0 || in_ECX == (char *)0x0))) {
    return false;
  }
  do {
    cVar1 = *data;
    uVar3 = 1;
    switch((uintptr_t)(cVar1)) {
    case '+':
    case '?':
      if (data[1] == '=') {
        uVar3 = 2;
        goto switchD_02072474_caseD_3d;
      }
      if (cVar1 == '=') goto switchD_02072474_caseD_3d;
      break;
    case ',':
    case '-':
    case '.':
    case '/':
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
    case ';':
    case '<':
    case '>':
      break;
    case ':':
      uVar3 = 2;
      if (data[1] != '=') {
        return false;
      }
    case '=':
switchD_02072474_caseD_3d:
      recovered_2001b70(local_13,data,uVar3);
      local_13[uVar3] = 0;
      *data = '\0';
      pf_varargs_20044f0__4_(in_EDX,0x40,&DAT_020c5119,(uint)in_ECX);
      for (iVar4 = 0; ((byte)(uint)(in_EDX[iVar4]) - 9 < 5 || ((byte)in_EDX[iVar4] == 0x20));
          iVar4 = iVar4 + 1) {
      }
      if (iVar4 != 0) {
        uVar2 = recovered_2002270(in_EDX + iVar4);
        recovered_2001c30(in_EDX,in_EDX + iVar4,uVar2 + 1);
      }
      uVar2 = recovered_2002270(in_EDX);
      while ((uVar2 != 0 && (((byte)(uint)(in_EDX[uVar2 - 1]) - 9 < 5 || ((byte)in_EDX[uVar2 - 1] == 0x20)))
             )) {
        in_EDX[uVar2 - 1] = '\0';
        uVar2 = uVar2 - 1;
      }
      pf_varargs_20044f0__4_(param_3,0x180,&DAT_020c5119,(uint)(data + uVar3));
      for (iVar4 = 0; ((byte)param_3[iVar4] - 9 < 5 || ((byte)param_3[iVar4] == 0x20));
          iVar4 = iVar4 + 1) {
      }
      if (iVar4 != 0) {
        uVar3 = recovered_2002270(param_3 + iVar4);
        recovered_2001c30(param_3,param_3 + iVar4,uVar3 + 1);
      }
      uVar3 = recovered_2002270(param_3);
      while ((uVar3 != 0 &&
             (((byte)param_3[uVar3 - 1] - 9 < 5 || ((byte)param_3[uVar3 - 1] == 0x20))))) {
        param_3[uVar3 - 1] = '\0';
        uVar3 = uVar3 - 1;
      }
      pf_varargs_20044f0__4_(param_4,3,&DAT_020c5119,(uint)local_13);
      return *in_EDX != '\0';
    default:
      if (cVar1 == '\0') {
        return false;
      }
    }
    data = data + 1;
  } while( true );
}
#undef DAT_020c5119
#undef local_13
