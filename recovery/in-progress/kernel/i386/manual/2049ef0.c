/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_0208e2dc (*(uint8_t *)(0x20c5084U))
#define DAT_0208e323 (*(uint8_t *)(0x20c5119U))
#define DAT_0208f86a (*(uint8_t *)(0x20cce67U))
#define DAT_0208f86e (*(uint8_t *)(0x20cce6bU))
#define DAT_0208f875 (*(uint8_t *)(0x20cce72U))
#define DAT_0208fb23 (*(uint8_t *)(0x20cd120U))
#define DAT_0208fb24 (*(uint8_t *)(0x20cd121U))
#define DAT_0208fc8a (*(uint8_t *)(0x20cd287U))
#define DAT_0208fc8b (*(uint8_t *)(0x20cd288U))
#define DAT_0208fc8c (*(uint8_t *)(0x20cd289U))
#define DAT_0208fc8d (*(uint8_t *)(0x20cd28aU))
#define local_11 (*(char *)(frame + 479))
#define local_18 (*(undefined4 * *)(frame + 472))
#define local_1e0 (*(char (*)[320])(frame + 16))
#define local_20 (*(uint (*)[2])(frame + 464))
#define local_24 (*(uint *)(frame + 460))
#define local_28 (*(char * *)(frame + 456))
#define local_2c (*(int *)(frame + 452))
#define local_30 (*(char * *)(frame + 448))
#define local_34 (*(int * *)(frame + 444))
#define local_3c (*(uint (*)[2])(frame + 436))
#define local_60 (*(ulong (*)[9])(frame + 400))
#define local_a0 (*(uint (*)[16])(frame + 336))
#define str_0208f831 (*(char (*)[1])(0x20cce2eU))
#define str_0208f84b (*(char (*)[1])(0x20cce48U))
#define str_0208f87a (*(char (*)[1])(0x20cce77U))
#define str_0208f880 (*(char (*)[1])(0x20cce7dU))
#define str_0208f8c5 (*(char (*)[1])(0x20ccec2U))
#define str_0208f8dd (*(char (*)[1])(0x20ccedaU))
#define str_0208f909 (*(char (*)[1])(0x20ccf06U))
#define str_0208f910 (*(char (*)[1])(0x20ccf0dU))
#define str_0208f91f (*(char (*)[1])(0x20ccf1cU))
#define str_0208f925 (*(char (*)[1])(0x20ccf22U))
#define str_0208fbb4 (*(char (*)[1])(0x20cd1b1U))
#define str_0208fc08 (*(char (*)[1])(0x20cd205U))
#define str_0209771e (*(char (*)[1])(0x20d7083U))
void recovered_2049ef0(char *text)

{
  unsigned char frame[528] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  bool bVar2;
  uchar uVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint *puVar8;
  char cVar9;
  char cVar10;
  uint incoming_edx;
  uint extraout_EDX = 0;
  uint extraout_EDX_00 = 0;
  char *pcVar11;
  uint incoming_edx_00;
  uint extraout_EDX_01 = 0;
  uint incoming_edx_01;
  uint extraout_EDX_02 = 0;
  uint extraout_EDX_03 = 0;
  uint incoming_edx_02;
  uint extraout_EDX_04 = 0;
  uint incoming_edx_03;
  uint extraout_EDX_05 = 0;

  pcVar4 = &DAT_0208e2dc;
  if (text != (char *)0x0) {
    pcVar4 = text;
  }
  pf_varargs_2003aa0__4_(local_1e0,0x140,&DAT_0208e323,(uint)pcVar4);
  local_2c = 0;
  local_30 = local_1e0;
  local_28 = local_1e0;
  pcVar4 = recovered_20024f0(local_1e0,';');
  if (pcVar4 != (char *)0x0) {
    local_60[0] = 0;
    local_20[0] = 0;
    local_a0[0] = 0;
    local_a0[1] = 0;
    local_a0[2] = 0;
    local_a0[3] = 0;
    local_a0[4] = 0;
    local_a0[5] = 0;
    local_a0[6] = 0;
    local_a0[7] = 0;
    local_a0[8] = 0;
    uVar5 = recovered_2074a50((int)&local_30,(ulong *******)0x1,(int *)local_60,local_20,local_a0);
    uVar7 = incoming_edx;
    if ((char)uVar5 != '\0') {
      if (local_20[0] == 1) {
        pcVar4 = str_0208f831;
      }
      else {
        if ((local_20[0] & 0xfffffffe) != 2) {
          if (local_a0[0] != 0) {
            recovered_20bfb40((int)local_a0,incoming_edx);
            uVar7 = extraout_EDX_00;
          }
          goto LAB_0203795f;
        }
        pcVar4 = str_0208f84b;
      }
      pf_varargs_204ff60___(&local_2c,(char *)0x0,pcVar4);
      uVar7 = extraout_EDX;
    }
LAB_0203795f:
    puVar8 = local_a0;
    goto LAB_02037965;
  }
  uVar6 = recovered_207a500(local_1e0,local_20);
  puVar1 = local_18;
  if ((char)uVar6 == '\0') {
    pf_varargs_204ff60___(&local_2c,(char *)0x0,str_0208f8c5);
    return;
  }
  local_3c[0] = 0;
  local_3c[1] = 0;
  local_34 = (int *)0x0;
  if (local_20[0] == 0) goto LAB_02037d9d;
  pcVar4 = (char *)*local_18;
  if (pcVar4 == (char *)0x0) {
LAB_02037b3d:
    if ((local_20[0] == 1) ||
       (((bVar2 = recovered_207a9c0(pcVar4,str_0208f91f), !bVar2 &&
         (bVar2 = recovered_207a9c0(pcVar4,str_0208f925), !bVar2)) ||
        (bVar2 = recovered_207a9c0((char *)puVar1[1],str_0208f910), !bVar2)))) {
      if (pcVar4 != (char *)0x0) {
        cVar9 = *pcVar4;
        if (cVar9 == '\0') {
          pcVar11 = &DAT_0208fc8a;
        }
        else {
          if (cVar9 != 'f') {
            if ((byte)(cVar9 + 0x9fU) < 0x1a) {
              cVar9 = cVar9 + -0x20;
            }
            if (cVar9 != 'F') goto LAB_02037bfa;
          }
          cVar9 = pcVar4[1];
          if (cVar9 == '\0') {
            pcVar11 = &DAT_0208fc8b;
          }
          else {
            if (cVar9 != 'o') {
              if ((byte)(cVar9 + 0x9fU) < 0x1a) {
                cVar9 = cVar9 + -0x20;
              }
              if (cVar9 != 'O') goto LAB_02037bfa;
            }
            cVar9 = pcVar4[2];
            if (cVar9 == '\0') {
              pcVar11 = &DAT_0208fc8c;
            }
            else {
              if (cVar9 != 'r') {
                if ((byte)(cVar9 + 0x9fU) < 0x1a) {
                  cVar9 = cVar9 + -0x20;
                }
                if (cVar9 != 'R') goto LAB_02037bfa;
              }
              if (pcVar4[3] != '\0') goto LAB_02037bfa;
              pcVar11 = &DAT_0208fc8d;
            }
          }
        }
        if (*pcVar11 == '\0') goto LAB_02037c7e;
      }
LAB_02037bfa:
      bVar2 = recovered_207a9c0(pcVar4,str_0208fbb4);
      if (((((!bVar2) && (bVar2 = recovered_207a9c0(pcVar4,str_0208fc08), !bVar2)) &&
           ((bVar2 = recovered_207a9c0(pcVar4,str_0208f8dd), !bVar2 &&
            ((bVar2 = recovered_207a9c0(pcVar4,str_0208f909), !bVar2 &&
             (bVar2 = recovered_207a9c0(pcVar4,&DAT_0208f86a), !bVar2)))))) &&
          (bVar2 = recovered_207a9c0(pcVar4,&DAT_0208f86e), !bVar2)) &&
         ((bVar2 = recovered_207a9c0(pcVar4,&DAT_0208f875), !bVar2 &&
          (bVar2 = recovered_207a9c0(pcVar4,str_0208f87a), !bVar2)))) {
        local_24 = local_24 & 0xffffff00;
        puVar8 = recovered_207e3b0(&local_2c,local_20,(undefined1 *)&local_24);
        if (((char)puVar8 == '\0') || ((char)local_24 == '\x01')) {
          recovered_207a960(local_20,incoming_edx_01);
          return;
        }
        local_60[0] = 0;
        local_60[1] = 0;
        local_60[2] = 0;
        local_60[3] = 0;
        local_60[4] = 0;
        local_60[5] = 0;
        local_60[6] = 0;
        local_60[7] = 0;
        local_60[8] = 0;
        local_11 = '\0';
        uVar6 = recovered_20bfd40(&local_2c,local_20,(int)local_a0,local_3c,(int)local_60,&local_11)
        ;
        uVar7 = extraout_EDX_02;
        if ((char)uVar6 != '\0') {
          if (local_11 == '\x01') {
            recovered_20c0390((char *)local_a0,local_34,local_3c[0],(int *)local_60);
            uVar7 = extraout_EDX_03;
          }
          else {
            uVar3 = recovered_207f2d0(&local_2c,(long *)local_20,local_60);
            uVar7 = incoming_edx_02;
            if ((uVar3 != '\0') && (local_60[0] != 0)) {
              recovered_20bfb40((int)local_60,incoming_edx_02);
              uVar7 = extraout_EDX_04;
            }
          }
        }
        recovered_207aac0(local_3c,uVar7);
        recovered_207a960(local_20,incoming_edx_03);
        puVar8 = local_60;
        uVar7 = extraout_EDX_05;
LAB_02037965:
        recovered_2043a90(puVar8,uVar7);
        return;
      }
    }
  }
  else {
    cVar9 = *pcVar4;
    if (cVar9 == '\0') {
      pcVar11 = str_0208f910;
LAB_02037b34:
      if (*pcVar11 != '\0') goto LAB_02037b3d;
    }
    else {
      if (cVar9 != 'i') {
        if ((byte)(cVar9 + 0x9fU) < 0x1a) {
          cVar10 = cVar9 + -0x20;
        }
        else {
          cVar10 = cVar9;
        }
        if (cVar10 == 'I') goto LAB_020379a2;
LAB_020379dc:
        if (cVar9 != 'f') {
          if ((byte)(cVar9 + 0x9fU) < 0x1a) {
            cVar9 = cVar9 + -0x20;
          }
          if (cVar9 != 'F') goto LAB_02037b3d;
        }
        cVar9 = pcVar4[1];
        if (cVar9 == '\0') {
          pcVar11 = str_0208f910 + 1;
        }
        else {
          if (cVar9 != 'u') {
            if ((byte)(cVar9 + 0x9fU) < 0x1a) {
              cVar9 = cVar9 + -0x20;
            }
            if (cVar9 != 'U') goto LAB_02037b3d;
          }
          cVar9 = pcVar4[2];
          if (cVar9 == '\0') {
            pcVar11 = str_0208f910 + 2;
          }
          else {
            if (cVar9 != 'n') {
              if ((byte)(cVar9 + 0x9fU) < 0x1a) {
                cVar9 = cVar9 + -0x20;
              }
              if (cVar9 != 'N') goto LAB_02037b3d;
            }
            cVar9 = pcVar4[3];
            if (cVar9 == '\0') {
              pcVar11 = str_0208f910 + 3;
            }
            else {
              if (cVar9 != 'c') {
                if ((byte)(cVar9 + 0x9fU) < 0x1a) {
                  cVar9 = cVar9 + -0x20;
                }
                if (cVar9 != 'C') goto LAB_02037b3d;
              }
              cVar9 = pcVar4[4];
              if (cVar9 == '\0') {
                pcVar11 = str_0208f910 + 4;
              }
              else {
                if (cVar9 != 't') {
                  if ((byte)(cVar9 + 0x9fU) < 0x1a) {
                    cVar9 = cVar9 + -0x20;
                  }
                  if (cVar9 != 'T') goto LAB_02037b3d;
                }
                cVar9 = pcVar4[5];
                if (cVar9 == '\0') {
                  pcVar11 = str_0208f910 + 5;
                }
                else {
                  if (cVar9 != 'i') {
                    if ((byte)(cVar9 + 0x9fU) < 0x1a) {
                      cVar9 = cVar9 + -0x20;
                    }
                    if (cVar9 != 'I') goto LAB_02037b3d;
                  }
                  cVar9 = pcVar4[6];
                  if (cVar9 == '\0') {
                    pcVar11 = str_0208f910 + 6;
                  }
                  else {
                    if (cVar9 != 'o') {
                      if ((byte)(cVar9 + 0x9fU) < 0x1a) {
                        cVar9 = cVar9 + -0x20;
                      }
                      if (cVar9 != 'O') goto LAB_02037b3d;
                    }
                    cVar9 = pcVar4[7];
                    if (cVar9 == '\0') {
                      pcVar11 = str_0208f910 + 7;
                    }
                    else {
                      if (cVar9 != 'n') {
                        if ((byte)(cVar9 + 0x9fU) < 0x1a) {
                          cVar9 = cVar9 + -0x20;
                        }
                        if (cVar9 != 'N') goto LAB_02037b3d;
                      }
                      if (pcVar4[8] != '\0') goto LAB_02037b3d;
                      pcVar11 = str_0208f910 + 8;
                    }
                  }
                }
              }
            }
          }
        }
        goto LAB_02037b34;
      }
LAB_020379a2:
      cVar10 = pcVar4[1];
      if (cVar10 == '\0') {
        pcVar11 = &DAT_0208fb23;
      }
      else {
        if (cVar10 != 'f') {
          if ((byte)(cVar10 + 0x9fU) < 0x1a) {
            cVar10 = cVar10 + -0x20;
          }
          if (cVar10 != 'F') goto LAB_020379dc;
        }
        if (pcVar4[2] != '\0') goto LAB_020379dc;
        pcVar11 = &DAT_0208fb24;
      }
      if (*pcVar11 != '\0') goto LAB_020379dc;
    }
  }
LAB_02037c7e:
  local_60[0] = 0;
  local_24 = 0;
  local_a0[0] = 0;
  local_a0[1] = 0;
  local_a0[2] = 0;
  local_a0[3] = 0;
  local_a0[4] = 0;
  local_a0[5] = 0;
  local_a0[6] = 0;
  local_a0[7] = 0;
  local_a0[8] = 0;
  uVar7 = recovered_2074a50((int)&local_30,(ulong *******)0x1,(int *)local_60,&local_24,local_a0);
  if ((char)uVar7 == '\0') {
    recovered_2043a90(local_a0,incoming_edx_00);
    if (local_20[0] != 0) {
      uVar7 = 0;
      do {
        recovered_2001710((void *)local_18[uVar7]);
        uVar7 = uVar7 + 1;
      } while (uVar7 < local_20[0]);
    }
    goto LAB_02037d9d;
  }
  pcVar4 = str_0208f831;
  if ((local_24 == 1) || (pcVar4 = str_0208f84b, (local_24 & 0xfffffffe) == 2)) {
LAB_02037d24:
    pf_varargs_204ff60___(&local_2c,(char *)0x0,pcVar4);
    uVar7 = extraout_EDX_01;
  }
  else {
    uVar7 = incoming_edx_00;
    if (local_60[0] == 0) {
      bVar2 = recovered_207a9c0((char *)*local_18,&DAT_0208f86e);
      pcVar4 = str_0209771e;
      if (!bVar2) {
        pcVar4 = str_0208f880;
      }
      goto LAB_02037d24;
    }
  }
  recovered_2043a90(local_a0,uVar7);
  if (local_20[0] != 0) {
    uVar7 = 0;
    do {
      recovered_2001710((void *)local_18[uVar7]);
      uVar7 = uVar7 + 1;
    } while (uVar7 < local_20[0]);
  }
LAB_02037d9d:
  recovered_2001710(local_18);
  return;
}
