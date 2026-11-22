/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_0208e323 (*(uint8_t *)(0x20c5119U))
#define format (*(char * *)(frame + 28))
#define in_stack_ffffff60 (*(undefined4 * *)(frame + 32))
#define local_14 (*(int *)(frame + 172))
#define local_18 (*(undefined4 *)(frame + 168))
#define local_1c (*(undefined1 *)(frame + 164))
#define local_40 (*(undefined4 *)(frame + 128))
#define local_44 (*(undefined4 *)(frame + 124))
#define local_48 (*(undefined4 *)(frame + 120))
#define local_4c (*(undefined4 *)(frame + 116))
#define local_50 (*(undefined4 *)(frame + 112))
#define local_54 (*(undefined4 *)(frame + 108))
#define local_58 (*(undefined4 *)(frame + 104))
#define local_5c (*(undefined4 *)(frame + 100))
#define local_60 (*(undefined4 *)(frame + 96))
#define local_64 (*(undefined4 *)(frame + 92))
#define local_68 (*(undefined4 *)(frame + 88))
#define local_6c (*(undefined4 *)(frame + 84))
#define local_70 (*(undefined4 *)(frame + 80))
#define local_74 (*(undefined4 *)(frame + 76))
#define local_78 (*(undefined4 *)(frame + 72))
#define local_7c (*(undefined4 *)(frame + 68))
#define local_7d (*(undefined1 *)(frame + 67))
#define local_81 (*(uint32_t *)(frame + 63))
#define local_85 (*(uint32_t *)(frame + 59))
#define local_89 (*(undefined4 *)(frame + 55))
#define local_9c (*(uint (*)[4])(frame + 36))
#define str_0208f739 (*(char (*)[1])(0x20d59f8U))
uint recovered_203a180(char *incoming_ecx,uint incoming_edx)

{
  unsigned char frame[224] __attribute__((aligned(16))) = {0};

  uint in_EAX = 0;
  undefined4 uVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  byte bVar5;

  if (incoming_ecx == (char *)0x0) {
    return in_EAX;
  }
  *incoming_ecx = '\0';
  uVar1 = recovered_2012480(-0x80000000,0,local_9c);
  if (((char)uVar1 != '\0') && (0x80000003 < local_9c[0])) {
    uVar1 = recovered_2012480(-0x7ffffffe,0,&local_4c);
    if ((char)uVar1 != '\0') {
      local_7c = local_4c;
      local_78 = local_48;
      local_74 = local_44;
      local_70 = local_40;
      uVar1 = recovered_2012480(-0x7ffffffd,0,&local_4c);
      if ((char)uVar1 != '\0') {
        local_6c = local_4c;
        local_68 = local_48;
        local_64 = local_44;
        local_60 = local_40;
        uVar1 = recovered_2012480(-0x7ffffffc,0,&local_4c);
        if ((char)uVar1 != '\0') {
          local_5c = local_4c;
          local_58 = local_48;
          local_54 = local_44;
          local_50 = local_40;
          recovered_2001b70(&local_4c,&local_7c,0x30);
          local_1c = 0;
          if ((byte)local_4c == 0) {
            local_14 = 0;
          }
          else {
            local_14 = 0;
            pbVar3 = (byte *)((int)&local_4c + 1);
            local_18 = 0;
            uVar1 = 0;
            bVar5 = (byte)local_4c;
            do {
              if ((bVar5 - 9 < 5) || (bVar5 == 0x20)) {
                local_18 = uVar1;
              }
              else {
                iVar4 = local_14;
                if ((local_14 != 0 & (byte)local_18) == 1) {
                  *(undefined1 *)((int)&local_4c + local_14) = 0x20;
                  iVar4 = local_14 + 1;
                  local_18 = 0;
                }
                *(byte *)((int)&local_4c + iVar4) = bVar5;
                local_14 = iVar4 + 1;
                uVar1 = CONCAT31((int3)((uint)(iVar4 + 1) >> 8),1);
              }
              bVar5 = *pbVar3;
              pbVar3 = pbVar3 + 1;
            } while (bVar5 != 0);
          }
          *(undefined1 *)((int)&local_4c + local_14) = 0;
          if ((byte)local_4c != 0) {
            in_stack_ffffff60 = &local_4c;
            format = &DAT_0208e323;
            goto LAB_020300f3;
          }
        }
      }
    }
  }
  uVar1 = recovered_2012480(0,0,&local_7c);
  if ((char)uVar1 != '\0') {
    in_stack_ffffff60 = &local_89;
    recovered_2001b70(in_stack_ffffff60,&local_78,4);
    recovered_2001b70(local_85,&local_70,4);
    recovered_2001b70(local_81,&local_74,4);
    local_7d = 0;
    uVar2 = pf_varargs_2003aa0__4_(incoming_ecx,0x60,&DAT_0208e323,(uint)in_stack_ffffff60);
    if (*incoming_ecx != '\0') {
      return uVar2;
    }
  }
  format = str_0208f739;
LAB_020300f3:
  uVar2 = pf_varargs_2003aa0__4_(incoming_ecx,0x60,format,(uint)in_stack_ffffff60);
  return uVar2;
}
