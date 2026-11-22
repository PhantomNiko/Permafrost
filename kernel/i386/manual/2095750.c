/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020ceab4 (*(uint8_t *)(0x20ceab4U))
#define DAT_020d081a (*(uint8_t *)(0x20d081aU))
#define DAT_020d081b (*(uint8_t *)(0x20d081bU))
#define DAT_020d081c (*(uint8_t *)(0x20d081cU))
#define DAT_020d081d (*(uint8_t *)(0x20d081dU))
#define DAT_020d081e (*(uint8_t *)(0x20d081eU))
#define DAT_02148040 (*(uint8_t volatile *)(0x2148040U))
#define DAT_02148044 (*(uint32_t volatile *)(0x2148044U))
#define DAT_0214804c (*(uint32_t volatile *)(0x214804cU))
#define DAT_0214820c (*(uint32_t volatile *)(0x214820cU))
#define DAT_02148210 (*(uint32_t volatile *)(0x2148210U))
#define DAT_0214821c (*(uint32_t volatile *)(0x214821cU))
#define DAT_02148220 (*(uint32_t volatile *)(0x2148220U))
#define DAT_02148224 (*(uint32_t volatile *)(0x2148224U))
#define DAT_02148228 (*(uint32_t volatile *)(0x2148228U))
#define DAT_0214affa (*(uint8_t volatile *)(0x214affaU))
#define DAT_0214b000 (*(uint32_t volatile *)(0x214b000U))
#define DAT_0214b018 (*(uint16_t volatile *)(0x214b018U))
#define DAT_0214b01a (*(uint16_t volatile *)(0x214b01aU))
#define DAT_0214b01c (*(uint32_t volatile *)(0x214b01cU))
#define str_020cea9b (*(char (*)[1])(0x20cea9bU))
#define str_020ceab6 (*(char (*)[1])(0x20ceab6U))
#define str_020cead0 (*(char (*)[1])(0x20cead0U))
#define str_020d081f (*(char (*)[1])(0x20d081fU))
#define str_020d0836 (*(char (*)[1])(0x20d0836U))
#define str_020d0862 (*(char (*)[1])(0x20d0862U))
#define str_020d0895 (*(char (*)[1])(0x20d0895U))
#define str_020d08a7 (*(char (*)[1])(0x20d08a7U))
#define str_020d08bb (*(char (*)[1])(0x20d08bbU))
#define str_020d08cd (*(char (*)[1])(0x20d08cdU))
#define str_020d08db (*(char (*)[1])(0x20d08dbU))
#define str_020d08ee (*(char (*)[1])(0x20d08eeU))
#define str_020d08f5 (*(char (*)[1])(0x20d08f5U))
#define str_020d090c (*(char (*)[1])(0x20d090cU))
#define str_020d0918 (*(char (*)[1])(0x20d0918U))
#define str_020d0929 (*(char (*)[1])(0x20d0929U))
#define auStack_11c6 (*(ushort (*)[2])(frame + 58))
#define auStack_11b2 (*(ushort (*)[1005])(frame + 78))
#define abStack_11b6 (*(byte (*)[4])(frame + 74))
#define local_11d8 (*(undefined1 (*)[12])(frame + 40))
#define local_11cc (*(ushort *)(frame + 52))
#define local_11ca (*(byte (*)[2])(frame + 54))
#define local_11c8 (*(ushort *)(frame + 56))
#define local_11c1 (*(char *)(frame + 63))
#define local_11be (*(uint *)(frame + 66))
#define local_11ba (*(uint *)(frame + 70))
#define local_9d8 (*(uint *)(frame + 2088))
#define in_stack_ffffee18 (*(undefined * *)(frame + 24))
#define local_9d2 (*(undefined1 (*)[6])(frame + 2094))
#define local_9cc (*(undefined2 *)(frame + 2100))
#define local_9ca (*(undefined1 (*)[20])(frame + 2102))
#define local_9b6 (*(undefined2 *)(frame + 2122))
#define local_9b4 (*(ushort *)(frame + 2124))
#define local_9b2 (*(undefined1 *)(frame + 2126))
#define local_9b1 (*(undefined1 *)(frame + 2127))
#define local_9b0 (*(undefined1 *)(frame + 2128))
#define local_9af (*(undefined1 *)(frame + 2129))
#define local_9ae (*(ushort *)(frame + 2130))
#define local_9ac (*(ushort *)(frame + 2132))
#define vararg0 (*(uint * *)(frame + 32))
#define local_9aa (*(ushort *)(frame + 2134))
#define local_9a8 (*(ushort *)(frame + 2136))
#define local_9a6 (*(ushort *)(frame + 2138))
#define local_9a4 (*(ushort *)(frame + 2140))
#define local_9a2 (*(ushort *)(frame + 2142))
#define local_9a0 (*(ushort *)(frame + 2144))
#define local_99e (*(ushort *)(frame + 2146))
#define local_99c (*(ushort *)(frame + 2148))
#define local_99a (*(ushort *)(frame + 2150))
#define local_998 (*(ushort *)(frame + 2152))
#define local_996 (*(ushort *)(frame + 2154))
#define local_994 (*(ushort *)(frame + 2156))
#define local_992 (*(ushort *)(frame + 2158))
#define local_990 (*(ushort *)(frame + 2160))
#define local_1d6 (*(byte (*)[256])(frame + 4138))
#define local_d6 (*(char (*)[128])(frame + 4394))
#define local_56 (*(char (*)[24])(frame + 4522))
#define local_3e (*(char (*)[10])(frame + 4546))
#define local_34 (*(uint *)(frame + 4556))
#define local_30 (*(uint *)(frame + 4560))
#define local_2c (*(uint *)(frame + 4564))
#define local_28 (*(uint *)(frame + 4568))
#define local_24 (*(int *)(frame + 4572))
#define local_20 (*(char * *)(frame + 4576))
#define local_1c (*(uint *)(frame + 4580))
#define local_18 (*(int * *)(frame + 4584))
#define local_14 (*(uint *)(frame + 4588))


undefined4 recovered_2095750(int *in_ECX,char *in_EDX,int *param_3,int param_4,undefined4 *param_5)

{
  unsigned char frame[4640] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  short sVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uchar extraout_CL;
  uchar in_CL;
  uchar extraout_CL_00;
  uchar in_CL_00;
  uchar in_CL_01;
  ushort uVar8;
  uint uVar9;
  int iVar10;
  char cVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;

  local_14 = 0;
  local_28 = 0;
  if (param_4 != 3) {
    in_stack_ffffee18 = &DAT_020ceab4;
    uVar4 = 3;
    pcVar12 = str_020cea9b;
    goto LAB_0209589c;
  }
  if (param_3 == (int *)0x0) {
    uVar4 = 1;
    pcVar12 = str_020ceab6;
    goto LAB_0209589c;
  }
  if ((*param_3 == 3) && (pcVar12 = (char *)param_3[3], pcVar12 != (char *)0x0)) {
    if ((param_3[9] == 3) && (pcVar13 = (char *)param_3[0xc], pcVar13 != (char *)0x0)) {
      vararg0 = &local_14;
      local_20 = in_EDX;
      local_18 = in_ECX;
      uVar4 = recovered_208fff0(in_ECX,in_EDX,(int)param_3,3,2,(int *)vararg0);
      if ((char)uVar4 == '\0') {
        return 0;
      }
      cVar11 = *pcVar12;
      if (cVar11 == '\0') {
        pcVar12 = &DAT_020d081a;
LAB_020958d3:
        if (*pcVar12 == '\0') {
          if (local_14 - 0x41 < 0xffffffc0) {
            vararg0 = (uint *)0x40;
            pcVar12 = str_020d0836;
            goto LAB_020958e2;
          }
          vararg0 = (uint *)0x209590f;
          uVar5 = recovered_2041b30(pcVar13,local_1d6);
          if ((char)uVar5 == '\0') {
            pcVar12 = str_020d0862;
            goto LAB_020958e2;
          }
          local_d6[0] = '\0';
          uVar5 = recovered_2041bd0(local_d6);
          if ((char)uVar5 == '\0') {
            if (local_14 != 0) {
              uVar4 = 0;
              do {
                pcVar12 = str_020d08a7;
                if (local_d6[0] != '\0') {
                  pcVar12 = local_d6;
                }
                pf_varargs_202ce90__4__4_(str_020d0895,(uint)local_1d6,(uint)pcVar12);
                recovered_2027720(in_CL_00);
                uVar4 = uVar4 + 1;
              } while (uVar4 < local_14);
            }
LAB_02095ff1:
            *param_5 = 1;
            param_5[1] = 0;
            param_5[2] = 0;
          }
          else {
            pcVar12 = (char *)0x209593d;
            uVar5 = recovered_2041f60((char *)local_1d6,&local_28);
            local_20 = (char *)CONCAT31(PF_PART3(local_20, 1),(char)uVar5);
            if ((char)uVar5 == '\0') {
              uVar5 = recovered_20420f0(local_1d6,&local_28,local_d6);
              if ((char)uVar5 == '\0') {
                if (local_14 != 0) {
                  uVar4 = 0;
                  do {
                    pcVar12 = str_020d08bb;
                    if (local_d6[0] != '\0') {
                      pcVar12 = local_d6;
                    }
                    pf_varargs_202ce90__4__4_(str_020d0895,(uint)local_1d6,(uint)pcVar12);
                    recovered_2027720(in_CL_01);
                    uVar4 = uVar4 + 1;
                  } while (uVar4 < local_14);
                }
                goto LAB_02095ff1;
              }
            }
            if (local_14 == 0) {
              local_24 = 0;
            }
            else {
              uVar4 = 0;
              local_24 = 0;
              do {
                local_d6[0] = '\0';
                pf_varargs_20044f0__4__4__4__4_
                          (local_56,0x18,str_020d090c,local_28 >> 0x18,local_28 >> 0x10 & 0xff,
                           local_28 >> 8 & 0xff,local_28 & 0xff);
                uVar7 = local_28;
                uVar5 = recovered_20a1d50(0x214aff8,local_28,local_3e,local_d6);
                if ((char)uVar5 != '\0') {
                  uVar6 = recovered_20081a0();
                  uVar8 = DAT_0214b01a;
                  uVar9 = (uint)uVar8;
                  if ((uVar8 == 0) && (uVar9 = uVar6 ^ 0x574e, (ushort)uVar9 < 2)) {
                    uVar9 = 1;
                  }
                  sVar2 = (short)uVar9 + 1;
                  local_2c = CONCAT22((short)(uVar9 >> 0x10),sVar2);
                  if (sVar2 == 0) {
                    local_2c = uVar9 + 2;
                  }
                  DAT_0214b01a = (short)local_2c;
                  iVar10 = DAT_0214b01c;
                  iVar10 = iVar10 + (uint)((short)iVar10 == 0);
                  sVar2 = (short)iVar10 + 1;
                  local_18 = (int *)CONCAT22((short)((uint)iVar10 >> 0x10),sVar2);
                  if (sVar2 == 0) {
                    local_18 = (int *)(iVar10 + 2);
                  }
                  PF_PART2(DAT_0214b01c, 0) = (short)local_18;
                  local_30 = recovered_20081a0();
                  recovered_2001b70(&local_9d8,local_3e,6);
                  recovered_2001b70(local_9d2,&DAT_0214affa,6);
                  local_9cc = 8;
                  uVar6 = recovered_20081a0();
                  uVar8 = DAT_0214b018;
                  if (uVar8 == 0) {
                    if ((ushort)uVar6 < 2) {
                      uVar8 = 1;
                    }
                    else {
                      uVar8 = (ushort)uVar6;
                    }
                  }
                  uVar3 = uVar8 + 1;
                  if (uVar3 == 0) {
                    uVar3 = uVar8 + 2;
                  }
                  DAT_0214b018 = uVar3;
                  uVar6 = DAT_0214b000;
                  recovered_20a2200(local_9ca,0x3c,uVar3,1,uVar6,uVar7);
                  recovered_2001e00(&local_9b6,0,0x28);
                  local_9b6 = 8;
                  local_9b2 = (undefined1)(local_2c >> 8);
                  local_9b1 = (undefined1)local_2c;
                  local_9b0 = (undefined1)((uint)local_18 >> 8);
                  local_9af = SUB41(local_18,0);
                  uVar6 = 0;
                  do {
                    cVar11 = (char)uVar6;
                    if (0x19 < uVar6) {
                      cVar11 = cVar11 + -0x1a;
                    }
                    *(char *)((int)&local_9ae + uVar6) = cVar11 + 'A';
                    uVar6 = uVar6 + 1;
                  } while (uVar6 != 0x20);
                  local_34 = uVar7;
                  for (uVar7 = (ushort)(local_990 << 8 | local_990 >> 8) + 0x800 +
                               (uint)(ushort)(local_992 << 8 | local_992 >> 8) +
                               (uint)(ushort)(local_994 << 8 | local_994 >> 8) +
                               (uint)(ushort)(local_996 << 8 | local_996 >> 8) +
                               (uint)(ushort)(local_998 << 8 | local_998 >> 8) +
                               (uint)(ushort)(local_99a << 8 | local_99a >> 8) +
                               (uint)(ushort)(local_99c << 8 | local_99c >> 8) +
                               (uint)(ushort)(local_99e << 8 | local_99e >> 8) +
                               (uint)(ushort)(local_9a0 << 8 | local_9a0 >> 8) +
                               (uint)(ushort)(local_9a2 << 8 | local_9a2 >> 8) +
                               (uint)(ushort)(local_9a4 << 8 | local_9a4 >> 8) +
                               (uint)(ushort)(local_9a6 << 8 | local_9a6 >> 8) +
                               (uint)(ushort)(local_9a8 << 8 | local_9a8 >> 8) +
                               (uint)(ushort)(local_9aa << 8 | local_9aa >> 8) +
                               (uint)(ushort)(local_9ac << 8 | local_9ac >> 8) +
                               (uint)(ushort)(local_9ae << 8 | local_9ae >> 8) +
                               ((uint)local_18 & 0xffff) + (local_2c & 0xffff) +
                               (uint)(ushort)(local_9b4 << 8 | local_9b4 >> 8); 0xffff < uVar7;
                      uVar7 = (uVar7 & 0xffff) + (uVar7 >> 0x10)) {
                  }
                  local_9b4 = ~(ushort)uVar7 << 8 | (ushort)~(ushort)uVar7 >> 8;
                  pcVar12 = (char *)0x2095c77;
                  recovered_2026f10();
                  cVar11 = DAT_02148040;
                  if ((cVar11 == '\x01') && (pcVar1 = (code *)DAT_0214804c, pcVar1 != (code *)0x0))
                  {
                    while( true ) {
                      iVar10 = __atomic_exchange_n(&(DAT_02148044),1,__ATOMIC_SEQ_CST);
                      if (iVar10 == 0) break;
                      iVar10 = DAT_02148044;
                      while (iVar10 != 0) {
                        iVar10 = DAT_02148044;
                      }
                    }
                    __atomic_thread_fence(__ATOMIC_SEQ_CST);
                    iVar10 = (*pcVar1)(&local_9d8,0x4a);
                    if (iVar10 == 0) {
                      uVar7 = DAT_02148224;
                      uVar5 = DAT_02148224;
                      iVar10 = DAT_02148224;
                      DAT_02148224 = iVar10 + 1;
                      uVar5 = DAT_02148224;
                      uVar5 = DAT_02148224;
                      uVar5 = DAT_02148224;
                      uVar5 = DAT_02148228;
                      uVar5 = DAT_02148228;
                      iVar10 = DAT_02148228;
                      DAT_02148228 = iVar10 + (uint)(0xfffffffe < uVar7);
                      uVar5 = DAT_02148228;
                      uVar5 = DAT_02148228;
                      uVar5 = DAT_02148228;
                      __atomic_thread_fence(__ATOMIC_SEQ_CST);
                      DAT_02148044 = 0;
                      pcVar13 = str_020d0918;
                    }
                    else {
                      uVar7 = DAT_0214820c;
                      uVar5 = DAT_0214820c;
                      iVar10 = DAT_0214820c;
                      DAT_0214820c = iVar10 + 1;
                      uVar5 = DAT_0214820c;
                      uVar5 = DAT_0214820c;
                      uVar5 = DAT_0214820c;
                      uVar5 = DAT_02148210;
                      uVar5 = DAT_02148210;
                      iVar10 = DAT_02148210;
                      DAT_02148210 = iVar10 + (uint)(0xfffffffe < uVar7);
                      uVar5 = DAT_02148210;
                      uVar5 = DAT_02148210;
                      uVar5 = DAT_02148210;
                      uVar7 = DAT_0214821c;
                      uVar5 = DAT_0214821c;
                      iVar10 = DAT_0214821c;
                      DAT_0214821c = iVar10 + 0x4a;
                      uVar5 = DAT_0214821c;
                      uVar5 = DAT_0214821c;
                      uVar5 = DAT_0214821c;
                      uVar5 = DAT_02148220;
                      uVar5 = DAT_02148220;
                      iVar10 = DAT_02148220;
                      DAT_02148220 = iVar10 + (uint)(0xffffffb5 < uVar7);
                      uVar5 = DAT_02148220;
                      uVar5 = DAT_02148220;
                      uVar5 = DAT_02148220;
                      __atomic_thread_fence(__ATOMIC_SEQ_CST);
                      DAT_02148044 = 0;
                      uVar7 = recovered_20081a0();
                      pcVar12 = (char *)0x2095d18;
                      uVar6 = recovered_20081a0();
                      pcVar13 = str_020d0929;
                      while (0 < (int)((uVar7 + 0x25) - uVar6)) {
                        local_9d8 = 0;
                        uVar5 = recovered_20a20d0((int)local_11d8,&local_9d8,uVar7 + 0x25);
                        if (((((char)uVar5 != '\0') && (0x29 < local_9d8)) &&
                            ((ushort)(local_11cc << 8 | local_11cc >> 8) == 0x800)) &&
                           ((((local_11ca[0] & 0xf0) == 0x40 && (local_11c1 == '\x01')) &&
                            (((local_11be >> 0x18 | (local_11be & 0xff0000) >> 8 |
                               (local_11be & 0xff00) << 8 | local_11be << 0x18) == local_34 &&
                             ((uVar6 = DAT_0214b000,
                              (local_11ba >> 0x18 | (local_11ba & 0xff0000) >> 8 |
                               (local_11ba & 0xff00) << 8 | local_11ba << 0x18) == uVar6 &&
                              (0x13 < (byte)(local_11ca[0] << 2))))))))) {
                          local_1c = (uint)(byte)(local_11ca[0] << 2);
                          uVar6 = (uint)(ushort)(local_11c8 << 8 | local_11c8 >> 8);
                          if ((local_1c + 8 <= uVar6) &&
                             (((((uVar6 + 0xe <= local_9d8 && (7 < uVar6 - local_1c)) &&
                                (local_11ca[local_1c] == 0)) &&
                               ((local_11ca[local_1c + 1] == 0 &&
                                ((ushort)(*(ushort *)((int)auStack_11c6 + local_1c) << 8 |
                                         *(ushort *)((int)auStack_11c6 + local_1c) >> 8) ==
                                 (ushort)local_2c)))) &&
                              (uVar8 = *(ushort *)((int)auStack_11c6 + local_1c + 2),
                              (ushort)(uVar8 << 8 | uVar8 >> 8) == (ushort)local_18)))) {
                            pcVar13 = (char *)0x2095e7a;
                            uVar7 = recovered_20081a0();
                            pcVar12 = (char *)((uVar7 - local_30) * 0x37);
                            if ((char)local_20 == '\0') {
                              pcVar15 = local_56;
                              pcVar14 = str_020d08db;
                            }
                            else {
                              pcVar14 = str_020d08cd;
                              pcVar15 = pcVar12;
                              pcVar12 = pcVar13;
                            }
                            pf_varargs_202ce90__4__4__4_
                                      (pcVar14,(uint)local_1d6,(uint)pcVar15,(uint)pcVar12);
                            local_24 = local_24 + 1;
                            in_CL = extraout_CL_00;
                            goto LAB_02095f18;
                          }
                        }
                        recovered_2026f10();
                        recovered_200afa0(1000);
                        pcVar12 = (char *)0x2095d4a;
                        uVar6 = recovered_20081a0();
                      }
                    }
                  }
                  else {
                    pcVar13 = str_020d0918;
                  }
                  pf_varargs_20044f0___(local_d6,0x80,pcVar13);
                }
                pcVar13 = str_020d08ee;
                if (local_d6[0] != '\0') {
                  pcVar13 = local_d6;
                }
                if ((char)local_20 == '\0') {
                  pcVar15 = local_56;
                  pcVar14 = str_020d08f5;
                }
                else {
                  pcVar14 = str_020d0895;
                  pcVar15 = pcVar13;
                  pcVar13 = pcVar12;
                }
                pf_varargs_202ce90__4__4__4_(pcVar14,(uint)local_1d6,(uint)pcVar15,(uint)pcVar13);
                in_CL = extraout_CL;
LAB_02095f18:
                pcVar12 = (char *)0x2095f1d;
                recovered_2027720(in_CL);
                uVar4 = uVar4 + 1;
              } while (uVar4 < local_14);
            }
            *param_5 = 1;
            param_5[1] = local_24;
            param_5[2] = (float)local_24;
          }
          param_5[3] = 0;
          param_5[4] = 0;
          param_5[5] = 0;
          param_5[6] = 0;
          param_5[7] = 0;
          param_5[8] = 0;
          return CONCAT31((int3)((uint)param_5 >> 8),1);
        }
      }
      else {
        if (cVar11 == 'p') {
LAB_020957f3:
          cVar11 = pcVar12[1];
          if (cVar11 == '\0') {
            pcVar12 = &DAT_020d081b;
          }
          else {
            if (cVar11 != 'i') {
              if ((byte)(cVar11 + 0x9fU) < 0x1a) {
                cVar11 = cVar11 + -0x20;
              }
              if (cVar11 != 'I') goto LAB_020958d8;
            }
            cVar11 = pcVar12[2];
            if (cVar11 == '\0') {
              pcVar12 = &DAT_020d081c;
            }
            else {
              if (cVar11 != 'n') {
                if ((byte)(cVar11 + 0x9fU) < 0x1a) {
                  cVar11 = cVar11 + -0x20;
                }
                if (cVar11 != 'N') goto LAB_020958d8;
              }
              cVar11 = pcVar12[3];
              if (cVar11 == '\0') {
                pcVar12 = &DAT_020d081d;
              }
              else {
                if (cVar11 != 'g') {
                  if ((byte)(cVar11 + 0x9fU) < 0x1a) {
                    cVar11 = cVar11 + -0x20;
                  }
                  if (cVar11 != 'G') goto LAB_020958d8;
                }
                if (pcVar12[4] != '\0') goto LAB_020958d8;
                pcVar12 = &DAT_020d081e;
              }
            }
          }
          goto LAB_020958d3;
        }
        if ((byte)(cVar11 + 0x9fU) < 0x1a) {
          cVar11 = cVar11 + -0x20;
        }
        if (cVar11 == 'P') goto LAB_020957f3;
      }
LAB_020958d8:
      pcVar12 = str_020d081f;
LAB_020958e2:
      pf_varargs_207a2e0__4_(local_18,local_20,pcVar12,(uint)vararg0);
      return 0;
    }
    uVar4 = 2;
  }
  else {
    uVar4 = 1;
  }
  pcVar12 = str_020cead0;
LAB_0209589c:
  pf_varargs_207a2e0__4__4__4_(in_ECX,in_EDX,pcVar12,(uint)in_EDX,uVar4,(uint)in_stack_ffffee18);
  return 0;
}
#undef DAT_020ceab4
#undef DAT_020d081a
#undef DAT_020d081b
#undef DAT_020d081c
#undef DAT_020d081d
#undef DAT_020d081e
#undef DAT_02148040
#undef DAT_02148044
#undef DAT_0214804c
#undef DAT_0214820c
#undef DAT_02148210
#undef DAT_0214821c
#undef DAT_02148220
#undef DAT_02148224
#undef DAT_02148228
#undef DAT_0214affa
#undef DAT_0214b000
#undef DAT_0214b018
#undef DAT_0214b01a
#undef DAT_0214b01c
#undef str_020cea9b
#undef str_020ceab6
#undef str_020cead0
#undef str_020d081f
#undef str_020d0836
#undef str_020d0862
#undef str_020d0895
#undef str_020d08a7
#undef str_020d08bb
#undef str_020d08cd
#undef str_020d08db
#undef str_020d08ee
#undef str_020d08f5
#undef str_020d090c
#undef str_020d0918
#undef str_020d0929
#undef auStack_11c6
#undef auStack_11b2
#undef abStack_11b6
#undef local_11d8
#undef local_11cc
#undef local_11ca
#undef local_11c8
#undef local_11c1
#undef local_11be
#undef local_11ba
#undef local_9d8
#undef in_stack_ffffee18
#undef local_9d2
#undef local_9cc
#undef local_9ca
#undef local_9b6
#undef local_9b4
#undef local_9b2
#undef local_9b1
#undef local_9b0
#undef local_9af
#undef local_9ae
#undef local_9ac
#undef vararg0
#undef local_9aa
#undef local_9a8
#undef local_9a6
#undef local_9a4
#undef local_9a2
#undef local_9a0
#undef local_99e
#undef local_99c
#undef local_99a
#undef local_998
#undef local_996
#undef local_994
#undef local_992
#undef local_990
#undef local_1d6
#undef local_d6
#undef local_56
#undef local_3e
#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
