/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c5119 (*(uint8_t *)(0x20c5119U))
#define DAT_020d689e (*(uint8_t *)(0x20d689eU))
#define str_020d6883 (*(char (*)[1])(0x20d6883U))
#define str_020d6892 (*(char (*)[1])(0x20d6892U))
#define str_020d68a1 (*(char (*)[1])(0x20d68a1U))
#define str_020d68b3 (*(char (*)[1])(0x20d68b3U))
#define str_020d68c0 (*(char (*)[1])(0x20d68c0U))
#define str_020d68d4 (*(char (*)[1])(0x20d68d4U))
#define str_020d68e4 (*(char (*)[1])(0x20d68e4U))
#define str_020d68f5 (*(char (*)[1])(0x20d68f5U))
#define str_020d6904 (*(char (*)[1])(0x20d6904U))
#define str_020d6911 (*(char (*)[1])(0x20d6911U))
#define str_020d6924 (*(char (*)[1])(0x20d6924U))
#define local_20 (*(uint *)(frame + 2144))
#define local_1c (*(int * *)(frame + 2148))
#define local_18 (*(uint *)(frame + 2152))
#define local_14 (*(byte * *)(frame + 2156))
#define abStack_83a (*(byte (*)[4])(frame + 70))
#define auStack_81e (*(undefined1 (*)[1998])(frame + 98))
#define auStack_82e (*(ushort (*)[4])(frame + 82))
#define uStack_822 (*(uint *)(frame + 94))
#define abStack_826 (*(byte (*)[4])(frame + 90))
#define local_850 (*(undefined1 (*)[12])(frame + 48))
#define local_844 (*(ushort *)(frame + 60))
#define local_842 (*(ushort (*)[4])(frame + 62))
#define local_836 (*(uint (*)[2])(frame + 74))
#define local_50 (*(int *)(frame + 2096))
#define local_4c (*(void * *)(frame + 2100))
#define local_48 (*(uint *)(frame + 2104))
#define local_44 (*(uint *)(frame + 2108))
#define local_40 (*(uint *)(frame + 2112))
#define local_3c (*(uint *)(frame + 2116))
#define local_38 (*(uint *)(frame + 2120))
#define local_34 (*(uint *)(frame + 2124))
#define local_30 (*(uint *)(frame + 2128))
#define local_2c (*(uint *)(frame + 2132))
#define local_28 (*(undefined4 *)(frame + 2136))
#define local_24 (*(uint *)(frame + 2140))


undefined4 recovered_20bc850(int in_ECX,undefined4 in_EDX,uint *param_3,int *param_4)

{
  unsigned char frame[2208] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;

  local_28 = in_EDX;
  uVar4 = recovered_20081a0();
  iVar9 = uVar4 + 0x37;
  uVar4 = recovered_20081a0();
  if (0 < (int)(iVar9 - uVar4)) {
    local_1c = param_4 + 4;
    local_4c = (void *)(in_ECX + 2);
    local_50 = in_ECX;
    do {
      local_2c = 0;
      uVar5 = recovered_20a20d0((int)local_850,&local_2c,iVar9);
      if ((char)uVar5 != '\0') {
        if (param_4 != (int *)0x0) {
          *param_4 = *param_4 + 1;
        }
        if ((((0x119 < local_2c && param_3 != (uint *)0x0) &&
             ((ushort)(local_844 << 8 | local_844 >> 8) == 0x800)) &&
            (((byte)local_842[0] & 0xf0) == 0x40)) && (abStack_83a[1] == '\x11')) {
          if (param_4 != (int *)0x0) {
            param_4[1] = param_4[1] + 1;
          }
          if (0x13 < (byte)((byte)local_842[0] << 2)) {
            uVar4 = (uint)(byte)((byte)local_842[0] << 2);
            uVar8 = (uint)(ushort)(local_842[1] << 8 | local_842[1] >> 8);
            if (((uVar4 + 8 <= uVar8) && (uVar8 + 0xe <= local_2c)) &&
               (((ushort)(*(ushort *)((int)local_842 + uVar4) << 8 |
                         *(ushort *)((int)local_842 + uVar4) >> 8) == 0x43 &&
                (local_18 = (int)local_842 + uVar4, uVar3 = *(ushort *)((int)local_842 + uVar4 + 2),
                (ushort)(uVar3 << 8 | uVar3 >> 8) == 0x44)))) {
              uVar3 = *(ushort *)((int)local_842 + uVar4 + 4);
              uVar3 = uVar3 << 8 | uVar3 >> 8;
              if ((uVar3 < 8) || (uVar8 < uVar4 + uVar3)) {
                if (param_4 != (int *)0x0) {
                  pcVar10 = str_020d6883;
LAB_020bc89b:
                  pf_varargs_20044f0__4_((char *)local_1c,0x40,&DAT_020c5119,(uint)pcVar10);
                }
              }
              else {
                pbVar1 = abStack_83a + uVar4;
                uVar8 = uVar3 - 8;
                if (param_4 == (int *)0x0) {
                  if ((0xef < uVar8) && (*pbVar1 == 2)) {
LAB_020bca4d:
                    if ((abStack_83a[uVar4 + 1] == 1) && (5 < abStack_83a[uVar4 + 2])) {
                      uVar7 = *(uint *)((int)local_836 + uVar4);
                      local_14 = pbVar1;
                      if ((uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 |
                          uVar7 << 0x18) == *(uint *)(local_50 + 0x1c)) {
                        local_24 = uVar8;
                        iVar6 = recovered_2001ff0(auStack_81e + uVar4,local_4c,6);
                        if (iVar6 == 0) {
                          if ((((*(char *)(local_18 + 0xf4) == 'c') &&
                               (*(char *)(local_18 + 0xf5) == -0x7e)) &&
                              (*(char *)(local_18 + 0xf6) == 'S')) &&
                             (*(char *)(local_18 + 0xf7) == 'c')) {
                            recovered_2001e00(&local_44,0,0x18);
                            uVar4 = *(uint *)(local_18 + 0x18);
                            local_48 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 |
                                       (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
                            local_34 = local_836[0] >> 0x18 | (local_836[0] & 0xff0000) >> 8 |
                                       (local_836[0] & 0xff00) << 8 | local_836[0] << 0x18;
                            local_44 = local_48;
                            if (local_24 < 0xf1) {
                              local_20 = 0;
                            }
                            else {
                              uVar4 = 0xf0;
                              local_20 = 0;
                              do {
                                uVar7 = (uint)local_14[uVar4];
                                uVar8 = uVar4 + 1;
                                if (uVar7 == 0) goto LAB_020bcb58;
                                if (uVar7 == 0xff) break;
                                if (local_24 <= uVar4 + 1) {
                                  if (param_4 == (int *)0x0) goto LAB_020bc8b0;
                                  pcVar10 = str_020d68e4;
                                  goto LAB_020bc89b;
                                }
                                bVar2 = (local_14 + 1)[uVar4];
                                local_18 = (uint)bVar2;
                                uVar8 = uVar4 + 2 + local_18;
                                if (local_24 < uVar8) {
                                  if (param_4 == (int *)0x0) goto LAB_020bc8b0;
                                  pcVar10 = str_020d68f5;
                                  goto LAB_020bc89b;
                                }
                                if (0x35 < uVar7 - 1) goto switchD_020bcba8_caseD_2;
                                iVar6 = uVar4 + 2;
                                switch((uintptr_t)(uVar7)) {
                                case 1:
                                  if (bVar2 < 4) break;
                                  uVar4 = *(uint *)(local_14 + iVar6);
                                  local_40 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 |
                                             (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
                                  goto LAB_020bcb58;
                                case 3:
                                  if (3 < bVar2) {
                                    uVar4 = *(uint *)(local_14 + iVar6);
                                    local_3c = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 |
                                               (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
                                    goto LAB_020bcb58;
                                  }
                                  break;
                                case 6:
                                  if (3 < bVar2) {
                                    uVar4 = *(uint *)(local_14 + iVar6);
                                    local_38 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 |
                                               (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
                                    goto LAB_020bcb58;
                                  }
                                  break;
                                case 0x33:
                                  if (3 < bVar2) {
                                    uVar4 = *(uint *)(local_14 + iVar6);
                                    local_30 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 |
                                               (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
                                    goto LAB_020bcb58;
                                  }
                                  break;
                                case 0x35:
                                  if (bVar2 != 0) {
                                    local_20 = (uint)local_14[iVar6];
                                    goto LAB_020bcb58;
                                  }
                                  break;
                                case 0x36:
                                  if (3 < bVar2) {
                                    uVar4 = *(uint *)(local_14 + iVar6);
                                    local_34 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 |
                                               (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
                                    goto LAB_020bcb58;
                                  }
                                }
switchD_020bcba8_caseD_2:
LAB_020bcb58:
                                uVar4 = uVar8;
                              } while (uVar4 < local_24);
                            }
                            if (((char)local_20 == (char)local_28) && (local_48 != 0)) {
                              if (local_40 == 0) {
                                local_40 = 0xffffff00;
                              }
                              param_3[5] = local_30;
                              param_3[4] = local_34;
                              param_3[3] = local_38;
                              param_3[2] = local_3c;
                              param_3[1] = local_40;
                              *param_3 = local_48;
                              return CONCAT31((int3)(local_48 >> 8),1);
                            }
                            if ((char)local_20 == (char)local_28) {
                              if (param_4 != (int *)0x0) {
                                pcVar10 = str_020d6911;
                                goto LAB_020bc89b;
                              }
                            }
                            else if (param_4 != (int *)0x0) {
                              param_4[3] = param_4[3] + 1;
                              pcVar10 = str_020d6904;
                              uVar4 = local_20;
                              goto LAB_020bca0d;
                            }
                          }
                          else if (param_4 != (int *)0x0) {
                            pcVar10 = str_020d68d4;
                            goto LAB_020bc89b;
                          }
                        }
                        else if (param_4 != (int *)0x0) {
                          pcVar10 = str_020d68c0;
                          goto LAB_020bc89b;
                        }
                      }
                      else if (param_4 != (int *)0x0) {
                        pcVar10 = str_020d68b3;
                        goto LAB_020bc89b;
                      }
                    }
                    else if (param_4 != (int *)0x0) {
                      pcVar10 = str_020d68a1;
                      goto LAB_020bc89b;
                    }
                  }
                }
                else {
                  param_4[2] = param_4[2] + 1;
                  if (uVar8 < 0xf0) {
                    pcVar10 = str_020d6892;
                    goto LAB_020bc89b;
                  }
                  if (*pbVar1 == 2) goto LAB_020bca4d;
                  pcVar10 = &DAT_020d689e;
                  uVar4 = (uint)*pbVar1;
LAB_020bca0d:
                  pf_varargs_20044f0__4__4_((char *)local_1c,0x40,str_020d6924,(uint)pcVar10,uVar4);
                }
              }
            }
          }
        }
      }
LAB_020bc8b0:
      recovered_2026f10();
      recovered_200afa0(1000);
      uVar4 = recovered_20081a0();
    } while (0 < (int)(iVar9 - uVar4));
  }
  return 0;
}
#undef DAT_020c5119
#undef DAT_020d689e
#undef str_020d6883
#undef str_020d6892
#undef str_020d68a1
#undef str_020d68b3
#undef str_020d68c0
#undef str_020d68d4
#undef str_020d68e4
#undef str_020d68f5
#undef str_020d6904
#undef str_020d6911
#undef str_020d6924
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef abStack_83a
#undef auStack_81e
#undef auStack_82e
#undef uStack_822
#undef abStack_826
#undef local_850
#undef local_844
#undef local_842
#undef local_836
#undef local_50
#undef local_4c
#undef local_48
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
