/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c5119 (*(uint8_t *)(0x20c5119U))
#define DAT_020cf499 (*(uint8_t *)(0x20cf499U))
#define DAT_02130724 (*(uint32_t volatile *)(0x2130724U))
#define DAT_021307dc (*(uint8_t volatile *)(0x21307dcU))
#define DAT_0214acf8 (*(uint8_t volatile *)(0x214acf8U))
#define DAT_0214acf9 (*(uint8_t volatile *)(0x214acf9U))
#define DAT_0214acfa (*(uint16_t volatile *)(0x214acfaU))
#define DAT_0214acfc (*(uint8_t volatile *)(0x214acfcU))
#define DAT_0214acfd (*(uint8_t volatile *)(0x214acfdU))
#define DAT_0214acfe (*(uint8_t volatile *)(0x214acfeU))
#define DAT_0214aeff (*(uint8_t volatile *)(0x214aeffU))
#define DAT_0214aff0 (*(uint32_t volatile *)(0x214aff0U))
#define str_020cf445 (*(char (*)[1])(0x20cf445U))
#define str_020cf458 (*(char (*)[1])(0x20cf458U))
#define str_020cf46d (*(char (*)[1])(0x20cf46dU))
#define str_020cf481 (*(char (*)[1])(0x20cf481U))
#define str_020cf49e (*(char (*)[1])(0x20cf49eU))
#define str_020cf4be (*(char (*)[1])(0x20cf4beU))
#define str_020cf4d1 (*(char (*)[1])(0x20cf4d1U))
#define str_020cf4ea (*(char (*)[1])(0x20cf4eaU))
#define str_020cf504 (*(char (*)[1])(0x20cf504U))
#define str_020cf521 (*(char (*)[1])(0x20cf521U))
#define str_020cf549 (*(char (*)[1])(0x20cf549U))
#define str_020cf579 (*(char (*)[1])(0x20cf579U))
#define in_stack_fffffdf0 (*(uint *)(frame + 32))
#define format (*(char * *)(frame + 28))
#define local_206 (*(uchar (*)[241])(frame + 42))
#define local_115 (*(uchar (*)[241])(frame + 283))
#define local_24 (*(void * *)(frame + 524))
#define local_20 (*(uint *)(frame + 528))
#define local_1c (*(uint *)(frame + 532))
#define local_18 (*(uint *)(frame + 536))
#define local_12 (*(byte *)(frame + 542))
#define local_11 (*(byte *)(frame + 543))


undefined4 recovered_20a0d50(char *in_ECX,char *in_EDX)

{
  unsigned char frame[592] __attribute__((aligned(16))) = {0};

  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  undefined4 extraout_EAX = 0;
  uint incoming_edx;
  uint incoming_edx_00;
  ulong size;

  if ((in_ECX == (char *)0x0) || (*in_ECX == '\0')) {
    format = str_020cf445;
  }
  else {
    in_stack_fffffdf0 = 0x20a0d7a;
    recovered_202a060((int)in_ECX,local_115);
    if (local_115[0] == '\0') {
      format = str_020cf458;
    }
    else {
      cVar1 = DAT_021307dc;
      if (cVar1 == '\x01') {
        recovered_202a060((int)local_115,local_206);
        in_stack_fffffdf0 = 0x20a0db0;
        uVar2 = recovered_202af10(local_206,incoming_edx);
        if ((uVar2 != 0xffffffff) &&
           ((iVar4 = DAT_02130724, iVar4 == 0 ||
            ((*(byte *)(iVar4 + 0xfc + uVar2 * 0x110) & 2) == 0)))) {
          in_stack_fffffdf0 = 0x20a0dd7;
          uVar3 = recovered_202b020(uVar2,incoming_edx_00);
          if ((char)uVar3 != '\0') {
            iVar4 = DAT_02130724;
            uVar3 = *(uint *)(iVar4 + 0xf8 + uVar2 * 0x110);
            if (uVar3 != 0) {
              pvVar5 = *(void **)(iVar4 + 0xf4 + uVar2 * 0x110);
              if (pvVar5 == (void *)0x0 || uVar3 < 0xc) {
                format = str_020cf481;
              }
              else {
                local_24 = pvVar5;
                iVar4 = recovered_2001ff0(pvVar5,&DAT_020cf499,4);
                if (iVar4 == 0) {
                  uVar2 = 0x100;
                  if (*(byte *)((int)local_24 + 7) != 0) {
                    uVar2 = (uint)*(byte *)((int)local_24 + 7);
                  }
                  size = uVar3 - 0xc;
                  if (size == 0) {
                    format = str_020cf4be;
                  }
                  else {
                    local_20 = (uint)*(byte *)((int)local_24 + 4);
                    if ((byte)(*(byte *)((int)local_24 + 4) - 0x21) < 0xe0) {
                      in_stack_fffffdf0 = 0x20;
                      format = str_020cf4d1;
                    }
                    else {
                      local_1c = (uint)*(byte *)((int)local_24 + 5);
                      if ((byte)(*(byte *)((int)local_24 + 5) - 0x21) < 0xe0) {
                        in_stack_fffffdf0 = 0x20;
                        format = str_020cf4ea;
                      }
                      else {
                        local_12 = *(byte *)((int)local_24 + 8);
                        local_18 = uVar2;
                        if ((uint)local_12 < local_20 + 7 >> 3) {
                          format = str_020cf504;
                        }
                        else {
                          local_11 = *(byte *)((int)local_24 + 6);
                          if (local_11 + uVar2 < 0x101) {
                            iVar4 = local_12 * local_1c;
                            if ((iVar4 == 0) || (iVar4 * uVar2 != size)) {
                              format = str_020cf549;
                            }
                            else {
                              pvVar5 = recovered_2001650(size);
                              if (pvVar5 != (void *)0x0) {
                                recovered_2001b70(pvVar5,(void *)((int)local_24 + 0xc),size);
                                recovered_2056940();
                                DAT_0214acf8 = 1;
                                DAT_0214acf9 = local_11;
                                DAT_0214acfa = (short)local_18;
                                DAT_0214acfc = (char)local_20;
                                DAT_0214acfd = (char)local_1c;
                                DAT_0214acfe = local_12;
                                DAT_0214aff0 = pvVar5;
                                pf_varargs_20044f0__4_
                                          (&DAT_0214aeff,0xf1,&DAT_020c5119,(uint)local_115);
                                recovered_20a0fd0();
                                return CONCAT31((int3)((uint)extraout_EAX >> 8),1);
                              }
                              format = str_020cf579;
                            }
                          }
                          else {
                            format = str_020cf521;
                          }
                        }
                      }
                    }
                  }
                }
                else {
                  format = str_020cf49e;
                }
              }
              goto LAB_020a0e2d;
            }
          }
        }
      }
      format = str_020cf46d;
    }
  }
LAB_020a0e2d:
  pf_varargs_20044f0__4_(in_EDX,0x80,format,in_stack_fffffdf0);
  return 0;
}
#undef DAT_020c5119
#undef DAT_020cf499
#undef DAT_02130724
#undef DAT_021307dc
#undef DAT_0214acf8
#undef DAT_0214acf9
#undef DAT_0214acfa
#undef DAT_0214acfc
#undef DAT_0214acfd
#undef DAT_0214acfe
#undef DAT_0214aeff
#undef DAT_0214aff0
#undef str_020cf445
#undef str_020cf458
#undef str_020cf46d
#undef str_020cf481
#undef str_020cf49e
#undef str_020cf4be
#undef str_020cf4d1
#undef str_020cf4ea
#undef str_020cf504
#undef str_020cf521
#undef str_020cf549
#undef str_020cf579
#undef in_stack_fffffdf0
#undef format
#undef local_206
#undef local_115
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_12
#undef local_11
