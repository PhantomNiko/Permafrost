/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020b9d54 (*(uint8_t volatile *)(0x21408e9U))
#define DAT_020c0134 (*(uint32_t volatile *)(0x214b108U))
#define DAT_020c0138 (*(uint32_t volatile *)(0x214b10cU))
#define format (*(char * *)(frame + 28))
#define local_14 (*(uint *)(frame + 44))
#define local_18 (*(uint *)(frame + 40))
#define str_02090773 (*(char (*)[1])(0x20cdd49U))
#define str_02091519 (*(char (*)[1])(0x20cea9bU))
#define str_02091698 (*(char (*)[1])(0x20cec70U))
#define str_020916c4 (*(char (*)[1])(0x20cec9cU))
#define str_0209194d (*(char (*)[1])(0x20cef25U))
uint recovered_208f4e0(int *incoming_ecx,char *incoming_edx,int param_3,int param_4,
                      int *in_stack_0000000c)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  char cVar1;
  int iVar2;
  byte bVar3;
  undefined4 uVar4;
  uint incoming_edx_00;

  local_18 = 0;
  local_14 = 0;
  if (param_4 == 2) {
    uVar4 = recovered_208fff0(incoming_ecx,incoming_edx,param_3,2,0,(int *)&local_18);
    if (((char)uVar4 != '\0') &&
       (uVar4 = recovered_208fff0(incoming_ecx,incoming_edx,param_3,2,1,(int *)&local_14),
       (char)uVar4 != '\0')) {
      cVar1 = DAT_020b9d54;
      if ((cVar1 == '\x01') &&
         (((uVar4 = recovered_2042790(), (char)uVar4 != '\0' && (iVar2 = DAT_020c0134, iVar2 != 0))
          && (iVar2 = DAT_020c0138, iVar2 != 0)))) {
        if (local_14 == 0 || local_18 == 0) {
          format = str_02091698;
        }
        else {
          bVar3 = recovered_2042950(local_18,local_14);
          if (bVar3 == 0) {
            format = str_020916c4;
          }
          else {
            uVar4 = recovered_208e640(in_stack_0000000c,incoming_edx_00);
            if ((char)uVar4 != '\0') {
              return CONCAT31((int3)((uint)uVar4 >> 8),1);
            }
            format = str_02090773;
          }
        }
      }
      else {
        format = str_0209194d;
      }
      pf_varargs_204ff60___(incoming_ecx,incoming_edx,format);
    }
  }
  else {
    pf_varargs_204ff60__4__4__4_
              (incoming_ecx,incoming_edx,str_02091519,(uint)incoming_edx,2,0x20ceab4U);
  }
  return 0;
}
