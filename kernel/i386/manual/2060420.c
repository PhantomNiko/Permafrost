/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c5119 (*(uint8_t *)(0x20c5119U))
#define DAT_020c5f80 (*(uint8_t *)(0x20c5f80U))
#define DAT_020c5f8c (*(uint8_t *)(0x20c5f8cU))
#define DAT_020c5fa8 (*(uint8_t *)(0x20c5fa8U))
#define DAT_020c79e2 (*(uint8_t *)(0x20c79e2U))
#define DAT_020c79e3 (*(char *)(0x20c79e3U))
#define DAT_020c79e4 (*(char *)(0x20c79e4U))
#define DAT_020c79e5 (*(char *)(0x20c79e5U))
#define DAT_020c7c4d (*(uint8_t *)(0x20c7c4dU))
#define DAT_020c7c86 (*(uint8_t *)(0x20c7c86U))
#define DAT_020c7d60 (*(uint8_t *)(0x20c7d60U))
#define DAT_020c7d63 (*(uint8_t *)(0x20c7d63U))
#define DAT_020d9d5c (*(uint32_t volatile *)(0x20d9d5cU))
#define DAT_021ec4ec (*(uint8_t volatile *)(0x21ec4ecU))
#define DAT_021ec533 (*(uint8_t volatile *)(0x21ec533U))
#define DAT_021ec624 (*(uint8_t volatile *)(0x21ec624U))
#define DAT_02238eec (*(uint32_t volatile *)(0x2238eecU))
#define PTR_recovered_2001b70_020d806c (*(uint8_t * *)(0x20d806cU))
#define PTR_recovered_2001c30_020d8070 (*(uint8_t * *)(0x20d8070U))
#define PTR_recovered_2001e00_020d8074 (*(uint8_t * *)(0x20d8074U))
#define PTR_recovered_2001ff0_020d8068 (*(uint8_t * *)(0x20d8068U))
#define PTR_recovered_2002270_020d8080 (*(uint8_t * *)(0x20d8080U))
#define PTR_recovered_20022a0_020d807c (*(uint8_t * *)(0x20d807cU))
#define PTR_recovered_20044f0_020d8078 (*(uint8_t * *)(0x20d8078U))
#define PTR_recovered_2019320_020d8084 (*(uint8_t * *)(0x20d8084U))
#define str_020c5bb8 (*(char (*)[1])(0x20c5bb8U))
#define str_020c5f85 (*(char (*)[1])(0x20c5f85U))
#define str_020c7875 (*(char (*)[1])(0x20c7875U))
#define str_020c787d (*(char (*)[1])(0x20c787dU))
#define str_020c7887 (*(char (*)[1])(0x20c7887U))
#define str_020c79e6 (*(char (*)[1])(0x20c79e6U))
#define str_020c7a0c (*(char (*)[1])(0x20c7a0cU))
#define str_020c7a27 (*(char (*)[1])(0x20c7a27U))
#define str_020c7a4a (*(char (*)[1])(0x20c7a4aU))
#define str_020c7a77 (*(char (*)[1])(0x20c7a77U))
#define str_020c7a97 (*(char (*)[1])(0x20c7a97U))
#define str_020c7ae5 (*(char (*)[1])(0x20c7ae5U))
#define str_020c7b0b (*(char (*)[1])(0x20c7b0bU))
#define str_020c7b24 (*(char (*)[1])(0x20c7b24U))
#define str_020c7b46 (*(char (*)[1])(0x20c7b46U))
#define str_020c7b6c (*(char (*)[1])(0x20c7b6cU))
#define str_020c7b82 (*(char (*)[1])(0x20c7b82U))
#define str_020c7b9d (*(char (*)[1])(0x20c7b9dU))
#define str_020c7bb4 (*(char (*)[1])(0x20c7bb4U))
#define str_020c7bef (*(char (*)[1])(0x20c7befU))
#define str_020c7c03 (*(char (*)[1])(0x20c7c03U))
#define str_020c7c18 (*(char (*)[1])(0x20c7c18U))
#define str_020c7c32 (*(char (*)[1])(0x20c7c32U))
#define str_020c7c55 (*(char (*)[1])(0x20c7c55U))
#define str_020c7c67 (*(char (*)[1])(0x20c7c67U))
#define str_020c7c73 (*(char (*)[1])(0x20c7c73U))
#define str_020c7c7e (*(char (*)[1])(0x20c7c7eU))
#define str_020c7c8b (*(char (*)[1])(0x20c7c8bU))
#define str_020c7cba (*(char (*)[1])(0x20c7cbaU))
#define str_020c7d21 (*(char (*)[1])(0x20c7d21U))
#define str_020c7d29 (*(char (*)[1])(0x20c7d29U))
#define str_020c7d2f (*(char (*)[1])(0x20c7d2fU))
#define str_020c7d66 (*(char (*)[1])(0x20c7d66U))
#define str_020c7dab (*(char (*)[1])(0x20c7dabU))
#define str_020c7db9 (*(char (*)[1])(0x20c7db9U))
#define str_020c7dc4 (*(char (*)[1])(0x20c7dc4U))
#define str_020c7df8 (*(char (*)[1])(0x20c7df8U))
#define str_020c7e17 (*(char (*)[1])(0x20c7e17U))
#define str_020c7e39 (*(char (*)[1])(0x20c7e39U))
#define str_020c7e5e (*(char (*)[1])(0x20c7e5eU))
#define str_020c7e90 (*(char (*)[1])(0x20c7e90U))
#define str_020c7ec9 (*(char (*)[1])(0x20c7ec9U))
#define str_020c7ef8 (*(char (*)[1])(0x20c7ef8U))
#define str_020c7f27 (*(char (*)[1])(0x20c7f27U))
#define str_020c7f54 (*(char (*)[1])(0x20c7f54U))
#define str_020c7f92 (*(char (*)[1])(0x20c7f92U))
#define str_020c7fbd (*(char (*)[1])(0x20c7fbdU))
#define str_020c7ff2 (*(char (*)[1])(0x20c7ff2U))
#define str_020c8026 (*(char (*)[1])(0x20c8026U))
#define str_020c8044 (*(char (*)[1])(0x20c8044U))
#define str_020c8065 (*(char (*)[1])(0x20c8065U))
#define str_020c8080 (*(char (*)[1])(0x20c8080U))
#define str_020c8090 (*(char (*)[1])(0x20c8090U))
#define str_020c80cb (*(char (*)[1])(0x20c80cbU))
#define str_020c80f8 (*(char (*)[1])(0x20c80f8U))
#define str_020c8111 (*(char (*)[1])(0x20c8111U))
#define str_020c8123 (*(char (*)[1])(0x20c8123U))
#define str_020c813d (*(char (*)[1])(0x20c813dU))
#define str_020c815a (*(char (*)[1])(0x20c815aU))
#define str_020c8189 (*(char (*)[1])(0x20c8189U))
#define str_020c81ad (*(char (*)[1])(0x20c81adU))
#define local_8538 (*(int * (*)[2])(frame + 40))
#define local_8530 (*(byte *)(frame + 48))
#define local_852f (*(byte *)(frame + 49))
#define local_852c (*(undefined8 *)(frame + 52))
#define local_8524 (*(uint *)(frame + 60))
#define local_8520 (*(uint * *)(frame + 64))
#define local_851c (*(uint * *)(frame + 68))
#define local_8518 (*(uint (*)[2])(frame + 72))
#define local_8510 (*(int * *)(frame + 80))
#define local_850c (*(int (*)[7])(frame + 84))
#define local_84f0 (*(uint (*)[106])(frame + 112))
#define local_8348 (*(undefined4 (*)[1420])(frame + 536))
#define local_6b98 (*(int * *)(frame + 6600))
#define local_738 (*(uint *)(frame + 32296))
#define local_734 (*(int *)(frame + 32300))
#define local_6f8 (*(int * *)(frame + 32360))
#define local_6f4 (*(int * *)(frame + 32364))
#define local_6f0 (*(uint *)(frame + 32368))
#define local_6ec (*(uint *)(frame + 32372))
#define local_6e8 (*(uint * *)(frame + 32376))
#define local_6e4 (*(char * *)(frame + 32380))
#define local_6e0 (*(int *)(frame + 32384))
#define local_6dc (*(int *)(frame + 32388))
#define local_6d8 (*(int *)(frame + 32392))
#define local_6d4 (*(char *)(frame + 32396))
#define local_6d3 (*(char (*)[64])(frame + 32397))
#define local_693 (*(char (*)[32])(frame + 32461))
#define local_673 (*(char (*)[96])(frame + 32493))
#define local_613 (*(char (*)[160])(frame + 32589))
#define local_573 (*(undefined1 (*)[64])(frame + 32749))
#define local_533 (*(undefined1 (*)[515])(frame + 32813))
#define local_330 (*(int * *)(frame + 33328))
#define local_32c (*(int *)(frame + 33332))
#define local_328 (*(uint * *)(frame + 33336))
#define local_318 (*(uint *)(frame + 33352))
#define local_314 (*(int *)(frame + 33356))
#define local_308 (*(uint *)(frame + 33368))
#define local_304 (*(uint *)(frame + 33372))
#define local_2f8 (*(int * *)(frame + 33384))
#define local_2f4 (*(int * *)(frame + 33388))
#define local_1b0 (*(uint (*)[6])(frame + 33712))
#define local_198 (*(uint * *)(frame + 33736))
#define local_194 (*(uint *)(frame + 33740))
#define auStack_6d18 (*(undefined4 (*)[96])(frame + 6216))
#define local_190 (*(int *)(frame + 33744))
#define local_17c (*(uint *)(frame + 33764))
#define local_178 (*(int *)(frame + 33768))
#define local_16c (*(uint *)(frame + 33780))
#define local_168 (*(int *)(frame + 33784))
#define local_d4 (*(uint *)(frame + 33932))
#define local_d0 (*(int *)(frame + 33936))
#define local_cc (*(uint * *)(frame + 33940))
#define local_bc (*(uint *)(frame + 33956))
#define local_b8 (*(int *)(frame + 33960))
#define local_ac (*(uint *)(frame + 33972))
#define local_a8 (*(int *)(frame + 33976))
#define local_9c (*(uint *)(frame + 33988))
#define local_98 (*(uint *)(frame + 33992))
#define local_94 (*(uint * *)(frame + 33996))
#define local_90 (*(uint * *)(frame + 34000))
#define local_8c (*(uint *)(frame + 34004))
#define local_88 (*(int *)(frame + 34008))
#define local_84 (*(undefined8 *)(frame + 34012))
#define local_7c (*(void * *)(frame + 34020))
#define local_78 (*(uint *)(frame + 34024))
#define local_74 (*(uint *)(frame + 34028))
#define local_70 (*(int * *)(frame + 34032))
#define local_6c (*(int * *)(frame + 34036))
#define local_68 (*(byte *)(frame + 34040))
#define local_64 (*(uint * *)(frame + 34044))
#define local_60 (*(int * *)(frame + 34048))
#define local_5c (*(int *)(frame + 34052))
#define local_58 (*(int * *)(frame + 34056))
#define local_54 (*(int * *)(frame + 34060))
#define local_50 (*(int * *)(frame + 34064))
#define local_4c (*(uint * *)(frame + 34068))
#define local_48 (*(int * *)(frame + 34072))
#define local_44 (*(uint *)(frame + 34076))
#define local_40 (*(int * *)(frame + 34080))
#define local_3c (*(uint *)(frame + 34084))
#define local_38 (*(uint * *)(frame + 34088))
#define local_34 (*(uint * *)(frame + 34092))
#define local_30 (*(int * *)(frame + 34096))
#define local_2c (*(uint * *)(frame + 34100))
#define local_28 (*(undefined8 *)(frame + 34104))
#define local_20 (*(int * *)(frame + 34112))
#define local_1c (*(int * *)(frame + 34116))
#define local_18 (*(int * *)(frame + 34120))
#define local_14 (*(int * *)(frame + 34124))


undefined4
recovered_2060420(int *in_ECX,char *in_EDX,uint *param_3,void *param_4,char *param_5,ulong param_6,
                 undefined1 *param_7)

{
  unsigned char frame[34176] __attribute__((aligned(16))) = {0};

  int *piVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  ushort uVar7;
  ushort uVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  undefined4 uVar14;
  void *pvVar15;
  uint *puVar16;
  char cVar17;
  code *pcVar18;
  byte *in_EDX_00;
  undefined *vararg2;
  int iVar19;
  uint uVar20;
  uint *puVar21;
  uint uVar22;
  char *pcVar23;
  int *piVar24;
  undefined4 *puVar25;
  int *piVar26;
  uint uVar27;
  ushort uVar28;
  uint *puVar29;
  bool bVar30;
  byte bVar31;
  undefined8 uVar32;
  ulonglong uVar33;
  char *pcVar34;

  bVar31 = 0;
  if (param_7 != (undefined1 *)0x0) {
    *param_7 = 0;
  }
  if (in_ECX != (int *)0x0) {
    uVar9 = recovered_2002270((char *)in_ECX);
    uVar10 = recovered_2002270(&DAT_020c79e2);
    if (uVar10 <= uVar9) {
      cVar17 = *(char *)((int)in_ECX + (uVar9 - uVar10));
      cVar3 = DAT_020c79e2;
      if (cVar17 != '\0') {
        if ((byte)(cVar17 + 0x9fU) < 0x1a) {
          cVar17 = cVar17 + -0x20;
        }
        if (cVar17 != '.') goto LAB_020604e8;
        iVar11 = -uVar10;
        cVar17 = *(char *)((int)in_ECX + iVar11 + uVar9 + 1);
        cVar3 = DAT_020c79e3;
        if (cVar17 != '\0') {
          if ((byte)(cVar17 + 0x9fU) < 0x1a) {
            cVar17 = cVar17 + -0x20;
          }
          if (cVar17 != 'K') goto LAB_020604e8;
          cVar17 = *(char *)((int)in_ECX + iVar11 + uVar9 + 2);
          cVar3 = DAT_020c79e4;
          if (cVar17 != '\0') {
            if ((byte)(cVar17 + 0x9fU) < 0x1a) {
              cVar17 = cVar17 + -0x20;
            }
            if ((cVar17 != 'O') ||
               (cVar3 = DAT_020c79e5, *(char *)((int)in_ECX + iVar11 + uVar9 + 3) != '\0'))
            goto LAB_020604e8;
          }
        }
      }
      if (cVar3 == '\0') {
        uVar12 = DAT_02238eec;
        local_20 = in_ECX;
        if (uVar12 != 0) {
          uVar20 = 0;
          pcVar23 = &DAT_021ec533;
          do {
            if (pcVar23[-0x47] == '\x01') {
              iVar11 = recovered_20022a0(pcVar23,(char *)local_20);
              if (iVar11 == 0) {
                if (-1 < (int)uVar20) {
                  uVar14 = CONCAT31((int3)(uVar20 >> 8),1);
                  if (param_4 == (void *)0x0) {
                    return uVar14;
                  }
                  piVar24 = (int *)(pcVar23 + -0x47);
                  goto LAB_02060573;
                }
                break;
              }
              uVar12 = DAT_02238eec;
            }
            uVar20 = uVar20 + 1;
            pcVar23 = pcVar23 + 0x1328;
          } while (uVar20 < uVar12);
        }
        pf_varargs_202ce90__4_(str_020c7a0c,(uint)in_EDX);
        recovered_2001e00(&local_70,0,0xc);
        local_6f8 = (int *)0x0;
        if (in_EDX != (char *)0x0) {
          recovered_2001e00(&local_70,0,0xc);
          if ((((-1 < (int)param_3) &&
               (uVar12 = recovered_202ad00((int)param_3,in_EDX,&local_70), uVar12 != 0)) &&
              ((local_68 & 2) == 0)) && ((local_6c != (int *)0x0 && (local_70 != (int *)0x0)))) {
            local_34 = param_3;
LAB_020606b7:
            if ((-1 < (int)local_34) && (iVar11 = DAT_020d9d5c, iVar11 < 0)) {
              DAT_020d9d5c = local_34;
            }
            pf_varargs_202ce90__4__4_(str_020c7a4a,(uint)local_34,(uint)local_6c);
            piVar13 = local_6c;
            piVar24 = local_70;
            pcVar23 = str_020c7b24;
            if ((((!((int *)0x33 < local_6c && local_70 != (int *)0x0)) ||
                 (pcVar23 = str_020c7b46, (char)*local_70 != '\x7f')) ||
                (*(char *)((int)local_70 + 1) != 'E')) ||
               ((*(char *)((int)local_70 + 2) != 'L' || (*(char *)((int)local_70 + 3) != 'F'))))
            goto LAB_020604ed;
            recovered_2001e00(&local_6f8,0,0x3c8);
            bVar2 = *(byte *)(piVar24 + 1);
            local_6f8 = (int *)(uint)bVar2;
            local_6f4 = (int *)(uint)*(byte *)((int)piVar24 + 5);
            pcVar23 = str_020c7b6c;
            local_14 = local_6f8;
            if ((1 < (byte)(bVar2 - 1)) ||
               ((pcVar23 = str_020c7b82, (char *)0x1 < (char *)((int)local_6f4 - 1U) ||
                (pcVar23 = str_020c7b9d, !((int *)0x3f < piVar13 || bVar2 != 2)))))
            goto LAB_020604ed;
            local_1c = piVar13;
            local_50 = local_6f4;
            if (local_6f4 == (int *)0x1) {
              local_6f0 = (uint)*(ushort *)(piVar24 + 4);
              local_6ec = (uint)*(ushort *)((int)piVar24 + 0x12);
              if (bVar2 == 2) {
                local_28 = *(ulonglong *)(piVar24 + 10);
                uVar28 = *(ushort *)((int)piVar24 + 0x3a);
                local_2c = (uint *)CONCAT22(PF_PART2(local_2c, 2),(short)piVar24[0xf]);
                uVar7 = *(ushort *)((int)piVar24 + 0x3e);
              }
              else {
                local_28 = (ulonglong)(uint)piVar24[8];
                uVar28 = *(ushort *)((int)piVar24 + 0x2e);
                local_2c = (uint *)CONCAT22(PF_PART2(local_2c, 2),(short)piVar24[0xc]);
                uVar7 = *(ushort *)((int)piVar24 + 0x32);
              }
            }
            else {
              local_6f0 = (uint)(ushort)(*(ushort *)(piVar24 + 4) << 8 |
                                        *(ushort *)(piVar24 + 4) >> 8);
              local_6ec = (uint)(ushort)(*(ushort *)((int)piVar24 + 0x12) << 8 |
                                        *(ushort *)((int)piVar24 + 0x12) >> 8);
              if (bVar2 == 2) {
                local_28 = recovered_20627e0((uint *)(piVar24 + 10),0);
                uVar28 = *(ushort *)((int)piVar24 + 0x3a) << 8 |
                         *(ushort *)((int)piVar24 + 0x3a) >> 8;
                local_2c = (uint *)CONCAT22(PF_PART2(local_2c, 2),
                                            *(ushort *)(piVar24 + 0xf) << 8 |
                                            *(ushort *)(piVar24 + 0xf) >> 8);
                uVar7 = *(ushort *)((int)piVar24 + 0x3e);
              }
              else {
                uVar12 = piVar24[8];
                local_28 = (ulonglong)
                           (uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                           uVar12 << 0x18);
                uVar28 = *(ushort *)((int)piVar24 + 0x2e) << 8 |
                         *(ushort *)((int)piVar24 + 0x2e) >> 8;
                local_2c = (uint *)CONCAT22(PF_PART2(local_2c, 2),
                                            *(ushort *)(piVar24 + 0xc) << 8 |
                                            *(ushort *)(piVar24 + 0xc) >> 8);
                uVar7 = *(ushort *)((int)piVar24 + 0x32);
              }
              uVar7 = uVar7 << 8 | uVar7 >> 8;
            }
            local_18 = (int *)CONCAT22(PF_PART2(local_18, 2),uVar7);
            pcVar23 = str_020c7bb4;
            if (((ushort)local_2c == 0) || (uVar28 == 0)) goto LAB_020604ed;
            local_4c = (uint *)((uint)local_2c & 0xffff);
            local_3c = (uint)uVar28;
            local_40 = (int *)((int)local_4c * local_3c);
            local_58 = (int *)((int)local_40 + (int)(int *)local_28);
            iVar11 = PF_PART4(local_28, 4) + (uint)CARRY4((uint)local_40,(uint)(int *)local_28);
            if ((!(PF_PART4(local_28, 4) == 0 &&
                  (uint)(local_1c < (int *)local_28) <= (uint)-PF_PART4(local_28, 4))) ||
               ((local_1c < local_40 ||
                (!(iVar11 == 0 && (uint)(local_1c < local_58) <= (uint)-iVar11)))))
            goto LAB_020604ed;
            local_6e8 = local_4c;
            recovered_2001e00(local_8538,0,0x40);
            if ((ushort)local_18 < (ushort)local_2c) {
              local_2c = (uint *)((uint)local_18 & 0xffff);
              recovered_2062800((int)piVar24,(uint)local_1c,(char)local_14 == '\x02',
                                local_50 == (int *)0x1,(int *)local_28,PF_PART4(local_28, 4),local_3c,
                                (uint)local_4c,(uint)local_2c,(uint *)local_8538);
            }
            recovered_2062ab0((char *)local_20,local_6d3);
            pf_varargs_20044f0__4_(local_693,0x20,&DAT_020c5119,0x20c7bd1);
            pcVar23 = recovered_2062510(local_6ec);
            pf_varargs_20044f0__4_(local_673,0x60,&DAT_020c5119,(uint)pcVar23);
            pf_varargs_20044f0__4_(local_613,0xa0,&DAT_020c5119,0x20c7bd9);
            piVar13 = local_1c;
            recovered_2062c20(piVar24,(uint)local_1c,str_020c7bef,local_6d3,0x40);
            recovered_2062c20(piVar24,(uint)piVar13,str_020c7c03,local_693,0x20);
            recovered_2062c20(piVar24,(uint)piVar13,str_020c7c18,local_673,0x60);
            recovered_2062c20(piVar24,(uint)piVar13,str_020c7c32,local_613,0xa0);
            cVar17 = recovered_2062da0(piVar24,(uint)piVar13,&DAT_020c7c4d);
            local_6d4 = '\x01';
            if (((cVar17 == '\0') &&
                (cVar17 = recovered_2062da0(piVar24,(uint)local_1c,str_020c7c55), cVar17 == '\0'))
               && (cVar17 = recovered_2062da0(piVar24,(uint)local_1c,str_020c7c67), cVar17 == '\0'))
            {
              local_6d4 = recovered_2062da0(piVar24,(uint)local_1c,str_020c7c73);
            }
            local_60 = (int *)0x18;
            if ((char)local_14 != '\x02') {
              local_60 = (int *)0xc;
            }
            uVar12 = (uint)((char)local_14 == '\x02');
            local_54 = (int *)(uVar12 * 8 + 8);
            local_48 = (int *)(uVar12 * 8 + 0x10);
            puVar21 = (uint *)0x0;
            do {
              local_18 = (int *)(uint)(local_50 == (int *)0x1);
              local_40 = (int *)(uint)((char)local_14 == '\x02');
              local_2c = puVar21;
              uVar32 = recovered_2062800((int)piVar24,(uint)local_1c,(char)local_14 == '\x02',
                                         local_50 == (int *)0x1,(int *)local_28,PF_PART4(local_28, 4),
                                         local_3c,(uint)local_4c,(uint)puVar21,(uint *)&local_330);
              iVar11 = local_32c;
              if ((char)uVar32 != '\0') {
                piVar13 = local_330;
                piVar26 = (int *)0x0;
                if ((local_850c[0] != 0 || (uint)-local_850c[0] < (uint)(local_330 < local_8510)) &&
                   (piVar13 = (int *)((int)local_330 + (int)local_8520),
                   (char *)((int)local_851c + (uint)CARRY4((uint)local_330,(uint)local_8520)) <
                   (char *)(uint)(piVar13 < local_1c))) {
                  piVar13 = (int *)((int)piVar13 + (int)piVar24);
                  piVar26 = piVar13;
                }
                uVar33 = ZEXT48(piVar13);
                if ((local_32c == 9) || (local_32c == 4)) {
                  local_18 = local_60;
                  if (local_32c != 4) {
                    local_18 = local_54;
                  }
                  piVar13 = (int *)0x0;
                  if (local_2f8 != (int *)0x0 || local_2f4 != (int *)0x0) {
                    local_18 = local_2f8;
                    piVar13 = local_2f4;
                  }
                  local_40 = piVar26;
                  uVar33 = recovered_20012c0(local_308,local_304,(uint)local_18,(uint)piVar13);
                  local_6d8 = local_6d8 + (int)uVar33;
                  piVar26 = local_40;
                }
                if ((piVar26 != (int *)0x0) &&
                   (((uVar14 = recovered_205a7b0((int)uVar33,(char *)piVar26,str_020c7c67),
                     (char)uVar14 != '\0' ||
                     (uVar14 = recovered_205a7b0(uVar14,(char *)piVar26,str_020c7c7e),
                     (char)uVar14 != '\0')) ||
                    (uVar14 = recovered_205a7b0(uVar14,(char *)piVar26,&DAT_020c7c86),
                    (char)uVar14 != '\0')))) {
                  local_6d4 = '\x01';
                }
                puVar21 = local_328;
                if (((iVar11 == 0xb) || (iVar11 == 2)) &&
                   (((int *)(uint)(local_2f8 < local_48) <= local_2f4 && (local_328 < local_4c)))) {
                  local_18 = (int *)(uint)(local_50 == (int *)0x1);
                  bVar30 = (char)local_14 == '\x02';
                  uVar33 = recovered_20012c0(local_308,local_304,(uint)local_2f8,(uint)local_2f4);
                  local_30 = (int *)uVar33;
                  uVar32 = recovered_2062800((int)piVar24,(uint)local_1c,bVar30,(char)local_18,
                                             (int *)local_28,PF_PART4(local_28, 4),local_3c,(uint)local_4c,
                                             (uint)puVar21,&local_194);
                  if ((((char)uVar32 != '\0') && (local_190 == 3)) &&
                     (local_6e4 = local_6e4 + (int)local_30, local_30 != (int *)0x0)) {
                    piVar13 = (int *)0x0;
                    do {
                      local_58 = local_2f4;
                      uVar12 = (uint)(ZEXT48(local_2f8) * ZEXT48(piVar13));
                      local_18 = (int *)(uVar12 + local_318);
                      iVar11 = (int)(ZEXT48(local_2f8) * ZEXT48(piVar13) >> 0x20) +
                               (int)local_2f4 * (int)piVar13 + local_314 +
                               (uint)CARRY4(uVar12,local_318);
                      pcVar23 = (char *)((int)local_2f4 +
                                        (uint)CARRY4((uint)local_18,(uint)local_2f8) + iVar11);
                      local_40 = piVar13;
                      if (((local_2f4 == (int *)0x0 &&
                            (uint)(local_1c < local_2f8) <= (uint)-(int)local_2f4) &&
                          (iVar11 == 0 && (uint)(local_1c < local_18) <= (uint)-iVar11)) &&
                         (pcVar23 == (char *)0x0 &&
                          (uint)(local_1c < (int *)((int)local_18 + (int)local_2f8)) <=
                          (uint)-(int)pcVar23)) {
                        if (local_50 == (int *)0x1) {
                          uVar12 = *(uint *)((int)piVar24 + (int)local_18);
                          if ((char)local_14 == '\x02') {
                            uVar20 = (uint)*(ushort *)((char *)((int)piVar24 + 6) + (int)local_18);
                          }
                          else {
                            uVar20 = (uint)*(ushort *)((char *)((int)piVar24 + 0xe) + (int)local_18)
                            ;
                          }
                        }
                        else {
                          uVar12 = *(uint *)((int)piVar24 + (int)local_18);
                          uVar12 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 |
                                   (uVar12 & 0xff00) << 8 | uVar12 << 0x18;
                          if ((char)local_14 == '\x02') {
                            uVar28 = *(ushort *)((char *)((int)piVar24 + 6) + (int)local_18);
                          }
                          else {
                            uVar28 = *(ushort *)((char *)((int)piVar24 + 0xe) + (int)local_18);
                          }
                          uVar20 = (uint)(ushort)(uVar28 << 8 | uVar28 >> 8);
                        }
                        in_EDX_00 = (byte *)0x0;
                        if ((local_168 != 0 || (uint)-local_168 < (uint)(uVar12 < local_16c)) &&
                           (local_178 + (uint)CARRY4(uVar12,local_17c) <
                            (uint)((int *)(uVar12 + local_17c) < local_1c))) {
                          in_EDX_00 = (byte *)((int)(uVar12 + local_17c) + (int)piVar24);
                        }
                        recovered_2062e10((int)&local_6f8,in_EDX_00,uVar20);
                      }
                      piVar13 = (int *)((int)local_40 + 1);
                    } while (piVar13 < local_30);
                  }
                }
              }
              puVar21 = (uint *)((int)local_2c + 1);
            } while (puVar21 != local_4c);
            pcVar23 = str_020c7c8b;
            if ((2 < local_6f0 - 1) ||
               ((local_6d4 == '\0' && (pcVar23 = str_020c7cba, local_6dc == 0)))) goto LAB_020604ed;
            uVar12 = DAT_02238eec;
            if (uVar12 != 0 && local_6d3[0] != '\0') {
              uVar20 = 0;
              pcVar23 = &DAT_021ec624;
              do {
                if (pcVar23[-0x138] == '\x01') {
                  iVar11 = recovered_20022a0(pcVar23,local_6d3);
                  if (iVar11 == 0) {
                    uVar14 = CONCAT31((int3)((uint)puVar21 >> 8),1);
                    if (param_4 == (void *)0x0) {
                      return uVar14;
                    }
                    piVar24 = (int *)(pcVar23 + -0x138);
                    goto LAB_02060573;
                  }
                  uVar12 = DAT_02238eec;
                }
                uVar20 = uVar20 + 1;
                pcVar23 = pcVar23 + 0x1328;
              } while (uVar20 < uVar12);
            }
            if (uVar12 != 0) {
              uVar20 = 0;
              pcVar23 = &DAT_021ec4ec;
              do {
                if (*pcVar23 != '\x01') {
                  if (uVar20 != 0x40) {
                    iVar11 = uVar20 + 1;
                    goto LAB_02060e6e;
                  }
                  break;
                }
                uVar20 = uVar20 + 1;
                pcVar23 = pcVar23 + 0x1328;
              } while (uVar12 != uVar20);
              if (0x3f < uVar12) {
                pcVar23 = str_020c7a77;
                goto LAB_020604ed;
              }
            }
            iVar11 = uVar12 + 1;
            DAT_02238eec = iVar11;
            uVar20 = uVar12;
LAB_02060e6e:
            piVar24 = (int *)(uVar20 * 0x1328);
            local_14 = piVar24 + 0x87b13b;
            recovered_2001e00(local_14,0,0x1328);
            *(char *)(piVar24 + 0x87b13b) = '\x01';
            piVar24[0x87b13c] = iVar11;
            if ((int)local_34 < 0) {
              local_34 = (uint *)DAT_020d9d5c;
            }
            piVar24[0x87b13d] = (int)local_34;
            piVar24[0x87b13e] = (uint)(local_6dc != 0) * 2 + 5;
            piVar24[0x87b13f] = (int)local_6f8;
            piVar24[0x87b140] = (int)local_6f4;
            piVar24[0x87b141] = local_6f0;
            piVar24[0x87b142] = local_6ec;
            piVar24[0x87b143] = (int)local_6e8;
            piVar24[0x87b144] = (int)local_6e4;
            piVar24[0x87b145] = local_6e0;
            piVar24[0x87b146] = local_6d8;
            piVar24[0x87b147] = local_6dc;
            *(undefined2 *)(piVar24 + 0x87b14c) = 0;
            *(char *)((int)piVar24 + 0x21ec532) = '\0';
            local_34 = (uint *)((int)piVar24 + 0x21ec533);
            local_1c = piVar24;
            pf_varargs_20044f0__4_((char *)local_34,0xf1,&DAT_020c5119,(uint)local_20);
            local_2c = (uint *)(piVar24 + 0x87b189);
            pf_varargs_20044f0__4_((char *)local_2c,0x40,&DAT_020c5119,(uint)local_6d3);
            pf_varargs_20044f0__4_((char *)(piVar24 + 0x87b199),0x20,&DAT_020c5119,(uint)local_693);
            pf_varargs_20044f0__4_((char *)(piVar24 + 0x87b1a1),0x60,&DAT_020c5119,(uint)local_673);
            pf_varargs_20044f0__4_((char *)(piVar24 + 0x87b1b9),0xa0,&DAT_020c5119,(uint)local_613);
            local_4c = (uint *)(piVar24 + 0x87b1e1);
            pf_varargs_20044f0__4_((char *)local_4c,0x40,&DAT_020c5119,(uint)local_573);
            pf_varargs_20044f0__4_((char *)(piVar24 + 0x87b1f1),0x200,&DAT_020c5119,(uint)local_533)
            ;
            piVar13 = local_14;
            iVar11 = piVar24[0x87b142];
            if (iVar11 < 0xb7) {
              switch((uintptr_t)(iVar11)) {
              case 3:
                pcVar23 = &DAT_020c5f80;
                break;
              default:
switchD_02061035_caseD_4:
                pcVar23 = str_020c5bb8;
                break;
              case 8:
                pcVar23 = &DAT_020c5f8c;
                break;
              case 0x14:
                pcVar23 = str_020c7875;
                break;
              case 0x15:
                pcVar23 = str_020c787d;
                break;
              case 0x28:
                pcVar23 = &DAT_020c5fa8;
                break;
              case 0x3e:
                pcVar23 = str_020c5f85;
              }
            }
            else if (iVar11 == 0xb7) {
              pcVar23 = str_020c7d21;
            }
            else if (iVar11 == 0xf3) {
              pcVar23 = str_020c7d29;
            }
            else {
              if (iVar11 != 0x102) goto switchD_02061035_caseD_4;
              pcVar23 = str_020c7887;
            }
            pf_varargs_202ce90__4__4__4__4__4__4_
                      (str_020c7a97,(uint)local_20,(uint)pcVar23,local_14[8],local_14[9],
                       local_14[0xb],local_14[0xc]);
            PF_PART1(local_194, 0) = '\0';
            puVar29 = local_2c;
            if ((char)piVar13[0x4e] == '\0') {
              puVar16 = (uint *)(local_1c + 0x87b14d);
              puVar29 = local_34;
              do {
                cVar17 = *(char *)((int)puVar16 + -1);
                if ((cVar17 == '/') || (cVar17 == '\\')) {
                  puVar29 = puVar16;
                }
                else if (cVar17 == '\0') break;
                puVar16 = (uint *)((int)puVar16 + 1);
              } while( true );
            }
            iVar11 = local_14[7];
            if (iVar11 < 0xb7) {
              switch((uintptr_t)(iVar11)) {
              case 3:
                pcVar23 = &DAT_020c5f80;
                break;
              default:
switchD_02061104_caseD_4:
                pcVar23 = str_020c5bb8;
                break;
              case 8:
                pcVar23 = &DAT_020c5f8c;
                break;
              case 0x14:
                pcVar23 = str_020c7875;
                break;
              case 0x15:
                pcVar23 = str_020c787d;
                break;
              case 0x28:
                pcVar23 = &DAT_020c5fa8;
                break;
              case 0x3e:
                pcVar23 = str_020c5f85;
              }
            }
            else if (iVar11 == 0xb7) {
              pcVar23 = str_020c7d21;
            }
            else if (iVar11 == 0xf3) {
              pcVar23 = str_020c7d29;
            }
            else {
              if (iVar11 != 0x102) goto switchD_02061104_caseD_4;
              pcVar23 = str_020c7887;
            }
            vararg2 = &DAT_020c7d60;
            if (local_14[5] != 1) {
              vararg2 = &DAT_020c7d63;
            }
            local_20 = local_70;
            local_18 = local_6c;
            pf_varargs_202ce90__4__4__4_(str_020c7d2f,(uint)puVar29,(uint)pcVar23,(uint)vararg2);
            piVar24 = local_14;
            *(char *)((int)local_14 + 0x46) = '\0';
            *(char *)(local_14 + 0x11) = '\0';
            local_14[0xd] = 0;
            local_14[0xe] = 0;
            *(char *)(local_14 + 0x136) = '\0';
            local_58 = local_14 + 0x2f5;
            recovered_2001e00(local_58,0,0x300);
            local_50 = piVar24 + 0x3b5;
            recovered_2001e00(local_50,0,0x300);
            local_40 = piVar24 + 0x475;
            recovered_2001e00(local_40,0,0x140);
            piVar24[0x2ea] = 0;
            piVar24[0x2e9] = 0;
            piVar24[0x2ec] = 0;
            piVar24[0x2eb] = 0;
            piVar24[0x2ee] = 0;
            piVar24[0x2ed] = 0;
            piVar24[0x2f0] = 0;
            piVar24[0x2ef] = 0;
            piVar24[0x2f2] = 0;
            piVar24[0x2f1] = 0;
            piVar24[0x2f4] = 0;
            piVar24[0x2f3] = 0;
            iVar11 = piVar24[7];
            if (piVar24[5] == 1 && iVar11 == 3) {
              if (local_20 == (int *)0x0 || local_18 < (int *)0x34) {
                pcVar23 = str_020c7b24;
              }
              else {
                recovered_2001e00(local_8538,0,0x19a4);
                local_8538[0] = local_20;
                local_8538[1] = local_18;
                local_6b98 = local_14;
                cVar17 = (char)*(ushort *)(local_20 + 1);
                local_8530 = cVar17 == '\x02';
                cVar3 = *(char *)((int)local_20 + 5);
                puVar21 = (uint *)(uint)*(ushort *)(local_20 + 1);
                local_852f = cVar3 == '\x01';
                if (((((char)*local_20 == '\x7f') && (*(char *)((int)local_20 + 1) == 'E')) &&
                    (*(char *)((int)local_20 + 2) == 'L')) && (*(char *)((int)local_20 + 3) == 'F'))
                {
                  if ((byte)(cVar3 - 1U) < 2) {
                    if (local_18 < (int *)0x40 && cVar17 == '\x02') {
                      pcVar23 = str_020c7b9d;
                    }
                    else {
                      if (cVar17 == '\x02') {
                        local_852c = recovered_20627e0((uint *)(local_20 + 10),
                                                       (uint)(cVar3 == '\x01'));
                        if (cVar3 != '\x01') {
                          uVar7 = *(ushort *)((int)local_20 + 0x3a) << 8 |
                                  *(ushort *)((int)local_20 + 0x3a) >> 8;
                          uVar8 = *(ushort *)(local_20 + 0xf) << 8 |
                                  *(ushort *)(local_20 + 0xf) >> 8;
                          uVar28 = *(ushort *)((int)local_20 + 0x3e);
                          goto LAB_020615de;
                        }
                        local_8524 = (uint)*(ushort *)((int)local_20 + 0x3a);
                        local_8520 = (uint *)(uint)*(ushort *)(local_20 + 0xf);
                        uVar28 = *(ushort *)((int)local_20 + 0x3e);
                      }
                      else if (cVar3 == '\x01') {
                        local_852c = (ulonglong)(uint)local_20[8];
                        local_8524 = (uint)*(ushort *)((int)local_20 + 0x2e);
                        local_8520 = (uint *)(uint)*(ushort *)(local_20 + 0xc);
                        uVar28 = *(ushort *)((int)local_20 + 0x32);
                      }
                      else {
                        uVar12 = local_20[8];
                        local_852c = (ulonglong)
                                     (uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 |
                                      (uVar12 & 0xff00) << 8 | uVar12 << 0x18);
                        uVar7 = *(ushort *)((int)local_20 + 0x2e) << 8 |
                                *(ushort *)((int)local_20 + 0x2e) >> 8;
                        uVar8 = *(ushort *)(local_20 + 0xc) << 8 | *(ushort *)(local_20 + 0xc) >> 8;
                        uVar28 = *(ushort *)((int)local_20 + 0x32);
LAB_020615de:
                        local_8520 = (uint *)(uint)uVar8;
                        local_8524 = (uint)uVar7;
                        uVar28 = uVar28 << 8 | uVar28 >> 8;
                      }
                      iVar11 = (int)(local_852c >> 0x20);
                      local_851c = (uint *)(uint)uVar28;
                      if ((char *)0xffffff9f < (char *)((int)local_8520 - 0x61U)) {
                        uVar12 = 0x40;
                        if (cVar17 != '\x02') {
                          uVar12 = 0x28;
                        }
                        if (uVar12 <= local_8524) {
                          lVar6 = local_852c + ZEXT48(local_8520) * (ulonglong)local_8524;
                          iVar19 = (int)((ulonglong)lVar6 >> 0x20);
                          uVar12 = (uint)(local_18 < (int *)local_852c);
                          uVar20 = -iVar11;
                          puVar21 = (uint *)(uVar20 - uVar12);
                          if (((iVar11 == 0 && uVar12 <= uVar20) &&
                              ((int *)(ZEXT48(local_8520) * (ulonglong)local_8524) <= local_18)) &&
                             (iVar19 == 0 && (uint)(local_18 < (int *)lVar6) <= (uint)-iVar19)) {
                            recovered_2001e00(&local_d4,0,0x40);
                            local_28 = CONCAT44(PF_PART4(local_28, 4),local_8520);
                            if (local_851c < local_8520) {
                              puVar21 = (uint *)0x0;
                              uVar32 = recovered_2062800((int)local_20,(uint)local_18,local_8530,
                                                         local_852f,(undefined4)local_852c,
                                                         PF_PART4(local_852c, 4),local_8524,
                                                         (uint)local_8520,(uint)local_851c,&local_d4
                                                        );
                              if (((char)uVar32 == '\0') || (local_d0 != 3)) {
                                pcVar23 = str_020c8189;
                                goto LAB_020613a1;
                              }
                              local_28 = CONCAT44(PF_PART4(local_28, 4),local_8520);
                            }
                            if ((int *)local_28 == (int *)0x0) {
                              local_28 = local_28 & 0xffffffff00000000;
                            }
                            else {
                              pcVar23 = (char *)0x0;
                              iVar11 = 0x20;
                              do {
                                uVar12 = (uint)(int *)local_28;
                                local_28 = (ulonglong)CONCAT14(local_8530,(int *)local_28);
                                puVar21 = (uint *)((int)local_8538 + iVar11);
                                uVar32 = recovered_2062800((int)local_20,(uint)local_18,local_8530,
                                                           local_852f,(undefined4)local_852c,
                                                           PF_PART4(local_852c, 4),local_8524,uVar12,
                                                           (uint)pcVar23,puVar21);
                                if ((char)uVar32 == '\0') {
                                  pcVar34 = str_020c81ad;
                                  goto LAB_020613a6;
                                }
                                uVar12 = *puVar21;
                                pcVar34 = (char *)0x0;
                                if ((local_a8 != 0 || (uint)-local_a8 < (uint)(uVar12 < local_ac))
                                   && (local_b8 + (uint)CARRY4(uVar12,local_bc) <
                                       (uint)((int *)(uVar12 + local_bc) < local_18))) {
                                  pcVar34 = (char *)((int)(uVar12 + local_bc) + (int)local_20);
                                }
                                auStack_6d18[(int)pcVar23] = pcVar34;
                                pcVar23 = (char *)((int)pcVar23 + 1);
                                iVar11 = iVar11 + 0x40;
                                local_28 = CONCAT44(PF_PART4(local_28, 4),local_8520);
                              } while (pcVar23 < local_8520);
                            }
                            puVar29 = local_2c;
                            if ((char)*local_2c == '\0') {
                              puVar16 = (uint *)(local_1c + 0x87b14d);
                              puVar29 = local_34;
                              do {
                                cVar17 = *(char *)((int)puVar16 + -1);
                                if ((cVar17 == '/') || (cVar17 == '\\')) {
                                  puVar29 = puVar16;
                                }
                                else if (cVar17 == '\0') break;
                                puVar16 = (uint *)((int)puVar16 + 1);
                              } while( true );
                            }
                            pf_varargs_202ce90__4__4__4_
                                      (str_020c7dc4,(uint)puVar29,(uint)(int *)local_28,
                                       local_14[0xb]);
                            recovered_2001e00(&local_330,0,0x180);
                            if (local_8520 == (uint *)0x0) {
                              local_28 = CONCAT44(0x1500,(int *)local_28);
                              local_78 = 0x2900;
LAB_020618b2:
                              uVar9 = PF_PART4(local_28, 4) + 0x2400;
                              pvVar15 = recovered_2001650(uVar9);
                              local_7c = pvVar15;
                              if (pvVar15 != (void *)0x0) {
                                recovered_2001e00(pvVar15,0,uVar9);
                                local_28 = CONCAT44(PF_PART4(local_28, 4),(int)pvVar15 + 0xfff) &
                                           0xfffffffffffff000;
                                if (local_8520 != (uint *)0x0) {
                                  puVar29 = (uint *)0x0;
                                  puVar21 = local_8518 + 1;
                                  do {
                                    if ((puVar21[3] & 2) != 0) {
                                      pvVar15 = (void *)(*(int *)(local_533 +
                                                                 (int)puVar29 * 4 + 0x203) +
                                                        (int)(int *)local_28);
                                      local_50[(int)puVar29 * 2 + -0xc0] = (int)pvVar15;
                                      local_50[(int)puVar29 * 2 + -0xbf] = 0;
                                      uVar9 = puVar21[9];
                                      uVar12 = puVar21[10];
                                      local_50[(int)puVar29 * 2 + 1] = uVar12;
                                      local_50[(int)puVar29 * 2] = uVar9;
                                      if (*puVar21 == 8) {
                                        recovered_2001e00(pvVar15,0,uVar9);
                                      }
                                      else if (uVar12 != 0 || uVar9 != 0) {
                                        recovered_2001b70(pvVar15,(char *)(puVar21[5] +
                                                                          (int)local_20),uVar9);
                                      }
                                    }
                                    puVar29 = (uint *)((int)puVar29 + 1);
                                    puVar21 = puVar21 + 0x10;
                                  } while (puVar29 < local_8520);
                                }
                                uVar12 = (uint)(int *)local_28;
                                if (local_14[7] == 0x15) {
                                  local_14[0x2f3] = (int)(int *)local_28 + 0x8000;
                                  local_14[0x2f4] = (uint)(0xffff7fff < (int *)local_28);
                                }
                                puVar29 = local_2c;
                                if ((char)*local_2c == '\0') {
                                  puVar16 = (uint *)(local_1c + 0x87b14d);
                                  puVar29 = local_34;
                                  do {
                                    cVar17 = *(char *)((int)puVar16 + -1);
                                    if ((cVar17 == '/') || (cVar17 == '\\')) {
                                      puVar29 = puVar16;
                                    }
                                    else if (cVar17 == '\0') break;
                                    puVar16 = (uint *)((int)puVar16 + 1);
                                  } while( true );
                                }
                                pf_varargs_202ce90__4__8__8_
                                          (str_020c7e5e,(uint)puVar29,(ulonglong)local_78,
                                           local_28 & 0xffffffff);
                                if (uVar12 != 0) {
                                  iVar11 = 0;
                                  do {
                                    switch((uintptr_t)(iVar11)) {
                                    case 0:
                                      pcVar18 = recovered_2065b10;
                                      break;
                                    case 1:
                                      pcVar18 = recovered_2065b70;
                                      break;
                                    case 2:
                                      pcVar18 = (code *)PTR_recovered_2001e00_020d8074;
                                      break;
                                    case 3:
                                      pcVar18 = (code *)PTR_recovered_2001b70_020d806c;
                                      break;
                                    case 4:
                                      pcVar18 = (code *)PTR_recovered_2001c30_020d8070;
                                      break;
                                    case 5:
                                      pcVar18 = (code *)PTR_recovered_2002270_020d8080;
                                      break;
                                    case 6:
                                      pcVar18 = (code *)PTR_recovered_20022a0_020d807c;
                                      break;
                                    case 7:
                                      pcVar18 = (code *)PTR_recovered_2019320_020d8084;
                                      break;
                                    case 8:
                                      pcVar18 = (code *)PTR_recovered_20044f0_020d8078;
                                      break;
                                    case 9:
                                      pcVar18 = recovered_2065c00;
                                      break;
                                    case 10:
                                      pcVar18 = recovered_2065c10;
                                      break;
                                    case 0xb:
                                      pcVar18 = recovered_2065c50;
                                      break;
                                    case 0xc:
                                      pcVar18 = recovered_2065ca0;
                                      break;
                                    case 0xd:
                                      pcVar18 = recovered_2065d00;
                                      break;
                                    case 0xe:
                                      pcVar18 = recovered_2065d10;
                                      break;
                                    case 0xf:
                                      pcVar18 = recovered_2065db0;
                                      break;
                                    case 0x10:
                                      pcVar18 = recovered_2065e20;
                                      break;
                                    case 0x11:
                                      pcVar18 = recovered_20660a0;
                                      break;
                                    case 0x12:
                                      pcVar18 = (code *)PTR_recovered_2001ff0_020d8068;
                                      break;
                                    case 0x13:
                                      pcVar18 = recovered_20661a0;
                                      break;
                                    case 0x14:
                                      pcVar18 = recovered_20661f0;
                                      break;
                                    case 0x15:
                                      pcVar18 = recovered_2066230;
                                      break;
                                    case 0x16:
                                      pcVar18 = recovered_2066290;
                                      break;
                                    case 0x17:
                                      pcVar18 = recovered_20662f0;
                                      break;
                                    case 0x18:
                                      pcVar18 = recovered_2066370;
                                      break;
                                    case 0x19:
                                      pcVar18 = recovered_20664a0;
                                      break;
                                    case 0x1a:
                                      pcVar18 = recovered_2066530;
                                      break;
                                    case 0x1b:
                                      pcVar18 = recovered_20665f0;
                                      break;
                                    case 0x1c:
                                      pcVar18 = recovered_2066660;
                                      break;
                                    case 0x1d:
                                      pcVar18 = recovered_20666f0;
                                      break;
                                    case 0x1e:
                                      pcVar18 = recovered_2066750;
                                      break;
                                    case 0x1f:
                                      pcVar18 = recovered_20667a0;
                                      break;
                                    case 0x20:
                                      pcVar18 = recovered_2066830;
                                      break;
                                    default:
                                      goto switchD_020619f2_default;
                                    }
                                    local_40[iVar11 * 2] = (int)pcVar18;
                                    local_40[iVar11 * 2 + 1] = 0;
switchD_020619f2_default:
                                    iVar11 = iVar11 + 1;
                                  } while (iVar11 != 0x28);
                                }
                                local_14[0x4c5] = PF_PART4(local_28, 4) + (int)(int *)local_28;
                                local_14[0x4c6] = 0;
                                local_14[0x4c7] = 0;
                                if (local_8520 != (uint *)0x0) {
                                  local_90 = (uint *)(local_1c + 0x87b14d);
                                  local_38 = (uint *)0x0;
                                  do {
                                    uVar12 = local_8518[(int)local_38 * 0x10 + 1];
                                    local_64 = (uint *)local_850c[(int)local_38 * 0x10];
                                    if ((uVar12 == 9) || (uVar12 == 4)) {
                                      local_28 = CONCAT44(local_8518 + (int)local_38 * 0x10,
                                                          (int *)local_28);
                                      if (((uint *)local_8518[(int)local_38 * 0x10 + 2] < local_8520
                                          ) && ((local_64 < local_8520 &&
                                                (puVar21 = local_64,
                                                local_58[(int)local_64 * 2] != 0 ||
                                                local_58[(int)local_64 * 2 + 1] != 0)))) {
                                        puVar29 = local_8518 +
                                                  (int)local_8518[(int)local_38 * 0x10 + 2] * 0x10;
                                        puVar16 = &local_d4;
                                        for (iVar11 = 0x10; iVar11 != 0; iVar11 = iVar11 + -1) {
                                          *puVar16 = *puVar29;
                                          puVar29 = puVar29 + (uint)bVar31 * -2 + 1;
                                          puVar16 = puVar16 + (uint)bVar31 * -2 + 1;
                                        }
                                        if ((local_cc < local_8520) &&
                                           (((local_d0 == 0xb || (local_d0 == 2)) &&
                                            (puVar21 = (uint *)(uint)(local_8530 != 0),
                                            (local_9c < (int)puVar21 * 8 + 0x10U) <= local_98)))) {
                                          puVar29 = local_8518 + (int)local_cc * 0x10;
                                          puVar16 = &local_738;
                                          for (iVar11 = 0x10; iVar11 != 0; iVar11 = iVar11 + -1) {
                                            *puVar16 = *puVar29;
                                            puVar29 = puVar29 + (uint)bVar31 * -2 + 1;
                                            puVar16 = puVar16 + (uint)bVar31 * -2 + 1;
                                          }
                                          if (local_734 == 3) {
                                            local_48 = *(int **)(PF_PART4(local_28, 4) + 0x38);
                                            local_54 = *(int **)(PF_PART4(local_28, 4) + 0x3c);
                                            if (local_48 == (int *)0x0 && local_54 == (int *)0x0) {
                                              piVar24 = (int *)0x18;
                                              if (local_8530 == 0) {
                                                piVar24 = (int *)0xc;
                                              }
                                              piVar13 = (int *)((uint)local_8530 * 8 + 8);
                                              local_48 = piVar24;
                                              if (uVar12 != 4) {
                                                local_48 = piVar13;
                                              }
                                              local_54 = (int *)0x0;
                                            }
                                            else {
                                              piVar24 = (int *)0x18;
                                              if (local_8530 == 0) {
                                                piVar24 = (int *)0xc;
                                              }
                                              piVar13 = (int *)((uint)local_8530 * 8 + 8);
                                            }
                                            if (uVar12 != 4) {
                                              piVar24 = piVar13;
                                            }
                                            if ((int *)(uint)(local_48 < piVar24) <= local_54) {
                                              piVar24 = *(int **)(PF_PART4(local_28, 4) + 0x28);
                                              piVar13 = *(int **)(PF_PART4(local_28, 4) + 0x2c);
                                              uVar33 = recovered_20012c0((uint)piVar24,(uint)piVar13
                                                                         ,(uint)local_48,
                                                                         (uint)local_54);
                                              puVar29 = local_2c;
                                              if ((char)*local_2c == '\0') {
                                                puVar29 = local_34;
                                                puVar16 = local_90;
                                                do {
                                                  cVar17 = *(char *)((int)puVar16 + -1);
                                                  if ((cVar17 == '/') || (cVar17 == '\\')) {
                                                    puVar29 = puVar16;
                                                  }
                                                  else if (cVar17 == '\0') break;
                                                  puVar16 = (uint *)((int)puVar16 + 1);
                                                } while( true );
                                              }
                                              PF_PART4(local_84, 4) = (int *)(uVar33 >> 0x20);
                                              uVar12 = (uint)PF_PART4(local_84, 4);
                                              local_84 = uVar33;
                                              pf_varargs_202ce90__4__4__4__8_
                                                        (str_020c7f54,(uint)puVar29,(uint)local_38,
                                                         (uint)local_64,uVar33);
                                              if (local_54 <= piVar13 &&
                                                  (uint)(piVar24 < local_48) <=
                                                  (uint)((int)piVar13 - (int)local_54)) {
                                                local_94 = local_84f0 + (int)local_64 * 0x10;
                                                local_3c = 0;
                                                local_60 = (int *)0x0;
                                                do {
                                                  uVar20 = (uint)((ulonglong)local_3c *
                                                                 ZEXT48(local_48));
                                                  piVar24 = (int *)(uVar20 + *(uint *)(PF_PART4(local_28, 4) + 0x18));
                                                  iVar11 = (int)local_60 * (int)local_48 +
                                                           local_3c * (int)local_54 +
                                                           (int)((ulonglong)local_3c *
                                                                 ZEXT48(local_48) >> 0x20) +
                                                           *(int *)(PF_PART4(local_28, 4) + 0x1c) +
                                                           (uint)CARRY4(uVar20,*(uint *)(PF_PART4(local_28, 4) + 0x18));
                                                  pcVar23 = (char *)((int)local_54 +
                                                                    (uint)CARRY4((uint)piVar24,
                                                                                 (uint)local_48) +
                                                                    iVar11);
                                                  puVar21 = (uint *)(-(int)local_54 -
                                                                    (uint)(local_18 < local_48));
                                                  local_88 = 0;
                                                  local_8c = 0;
                                                  if (((local_54 != (int *)0x0 ||
                                                        (uint)-(int)local_54 <
                                                        (uint)(local_18 < local_48)) ||
                                                      (puVar21 = (uint *)(-iVar11 -
                                                                         (uint)(local_18 < piVar24))
                                                      , iVar11 != 0 ||
                                                        (uint)-iVar11 < (uint)(local_18 < piVar24)))
                                                     || (pcVar23 != (char *)0x0 ||
                                                         (uint)-(int)pcVar23 <
                                                         (uint)(local_18 <
                                                               (int *)((int)piVar24 + (int)local_48)
                                                               ))) {
                                                    pcVar23 = str_020c7f92;
LAB_02062345:
                                                    pf_varargs_20044f0__4__4__4_
                                                              ((char *)&local_194,0xc0,pcVar23,
                                                               (uint)local_38,local_3c,uVar12);
                                                    goto LAB_020623b2;
                                                  }
                                                  puVar29 = (uint *)((int)piVar24 + (int)local_20);
                                                  if (local_8530 == 1) {
                                                    if (local_852f == 0) {
                                                      uVar20 = *puVar29;
                                                      uVar22 = puVar29[1];
                                                      uVar27 = uVar20 >> 0x18 |
                                                               (uVar20 & 0xff0000) >> 8 |
                                                               (uVar20 & 0xff00) << 8 |
                                                               uVar20 << 0x18;
                                                      uVar20 = uVar22 >> 0x18 |
                                                               (uVar22 & 0xff0000) >> 8 |
                                                               (uVar22 & 0xff00) << 8 |
                                                               uVar22 << 0x18;
                                                      uVar22 = puVar29[2];
                                                      local_74 = uVar22 >> 0x18 |
                                                                 (uVar22 & 0xff0000) >> 8 |
                                                                 (uVar22 & 0xff00) << 8 |
                                                                 uVar22 << 0x18;
                                                      uVar22 = puVar29[3];
                                                      local_30 = (int *)(uVar22 >> 0x18 |
                                                                         (uVar22 & 0xff0000) >> 8 |
                                                                         (uVar22 & 0xff00) << 8 |
                                                                        uVar22 << 0x18);
                                                    }
                                                    else {
                                                      uVar20 = *puVar29;
                                                      uVar27 = puVar29[1];
                                                      local_30 = (int *)puVar29[2];
                                                      local_74 = puVar29[3];
                                                    }
                                                    local_44 = 0;
                                                    if (*(int *)(PF_PART4(local_28, 4) + 4) == 4) {
                                                      uVar32 = recovered_20627e0(puVar29 + 4,
                                                                                 (uint)local_852f);
                                                      local_44 = (uint)uVar32;
                                                      local_5c = (int)((ulonglong)uVar32 >> 0x20);
                                                    }
                                                    else {
                                                      local_5c = 0;
                                                    }
                                                  }
                                                  else {
                                                    if (local_852f == 0) {
                                                      uVar20 = *puVar29;
                                                      uVar22 = puVar29[1];
                                                      uVar20 = uVar20 >> 0x18 |
                                                               (uVar20 & 0xff0000) >> 8 |
                                                               (uVar20 & 0xff00) << 8 |
                                                               uVar20 << 0x18;
                                                      uVar22 = uVar22 >> 0x18 |
                                                               (uVar22 & 0xff0000) >> 8 |
                                                               (uVar22 & 0xff00) << 8 |
                                                               uVar22 << 0x18;
                                                      if (*(int *)(PF_PART4(local_28, 4) + 4) == 4) {
                                                        uVar27 = puVar29[2];
                                                        local_44 = uVar27 >> 0x18 |
                                                                   (uVar27 & 0xff0000) >> 8 |
                                                                   (uVar27 & 0xff00) << 8 |
                                                                   uVar27 << 0x18;
                                                        goto LAB_02061ec5;
                                                      }
LAB_02061edc:
                                                      local_44 = 0;
                                                      local_5c = 0;
                                                    }
                                                    else {
                                                      uVar20 = *puVar29;
                                                      uVar22 = puVar29[1];
                                                      if (*(int *)(PF_PART4(local_28, 4) + 4) != 4)
                                                      goto LAB_02061edc;
                                                      local_44 = puVar29[2];
LAB_02061ec5:
                                                      local_5c = (int)local_44 >> 0x1f;
                                                    }
                                                    uVar27 = 0;
                                                    local_30 = (int *)(uVar22 & 0xff);
                                                    local_74 = uVar22 >> 8;
                                                  }
                                                  iVar11 = local_14[7];
                                                  uVar22 = 4;
                                                  if (0x3d < iVar11) {
                                                    if (iVar11 == 0x3e) {
                                                      bVar30 = local_30 == (int *)0x1;
                                                    }
                                                    else {
                                                      if (iVar11 != 0xb7) {
                                                        if (iVar11 == 0x102) {
                                                          uVar22 = 8;
                                                          if (local_30 != (int *)0x2) {
                                                            uVar22 = (uint)(local_30 == (int *)0x6e)
                                                                     * 4 + 4;
                                                          }
                                                          goto switchD_02061f14_caseD_3;
                                                        }
                                                        goto switchD_02061f14_caseD_4;
                                                      }
                                                      bVar30 = local_30 == (int *)0x101;
                                                    }
                                                    if (local_30 == (int *)0x0) goto LAB_02061d9c;
                                                    uVar22 = (uint)bVar30 * 4 + 4;
                                                    goto switchD_02061f14_caseD_4;
                                                  }
                                                  switch((uintptr_t)(iVar11)) {
                                                  case 3:
                                                  case 0x28:
switchD_02061f14_caseD_3:
                                                    if (local_30 != (int *)0x0) break;
                                                    goto LAB_02061d9c;
                                                  case 0x14:
                                                    bVar30 = local_30 == (int *)0x1;
                                                    if (local_30 == (int *)0x0) goto LAB_02061d9c;
LAB_02061f98:
                                                    uVar22 = (uint)bVar30 * 2 + 2;
                                                    break;
                                                  case 0x15:
                                                    if (local_30 == (int *)0x0) goto LAB_02061d9c;
                                                    uVar22 = 8;
                                                    if (local_30 != (int *)0x26) {
                                                      bVar30 = local_30 == (int *)0xa;
                                                      goto LAB_02061f98;
                                                    }
                                                  }
switchD_02061f14_caseD_4:
                                                  uVar4 = *local_94;
                                                  uVar5 = local_94[1];
                                                  puVar21 = (uint *)((uVar5 - uVar27) -
                                                                    (uint)(uVar4 < uVar20));
                                                  if ((uVar5 < uVar27 ||
                                                       uVar5 - uVar27 < (uint)(uVar4 < uVar20)) ||
                                                     ((uVar5 - uVar27) - (uint)(uVar4 < uVar20) <
                                                      (uint)(uVar4 - uVar20 < uVar22))) {
                                                    pcVar23 = str_020c7fbd;
                                                    goto LAB_02062345;
                                                  }
                                                  uVar14 = recovered_2063490((int *)local_8538,
                                                                             (int)&local_d4,
                                                                             (int)&local_738,
                                                                             local_74,local_1b0);
                                                  if ((char)uVar14 == '\0') {
                                                    pcVar23 = str_020c7ff2;
                                                    uVar12 = local_74;
                                                    goto LAB_02062345;
                                                  }
                                                  uVar14 = recovered_20636f0((int)local_8538,
                                                                             (int)local_1b0,
                                                                             &local_8c);
                                                  uVar32 = CONCAT44(local_5c,local_44);
                                                  if ((char)uVar14 == '\0') {
                                                    if (local_198 == (uint *)0x0) {
                                                      pcVar34 = str_020c5bb8;
                                                    }
                                                    else {
                                                      pcVar34 = str_020c5bb8;
                                                      if ((char)*local_198 != '\0') {
                                                        pcVar34 = (char *)local_198;
                                                      }
                                                    }
                                                    pcVar23 = str_020c8026;
                                                    goto LAB_020623aa;
                                                  }
                                                  uVar22 = local_58[(int)local_64 * 2];
                                                  puVar29 = (uint *)(uVar20 + local_58[(int)local_64
                                                                                       * 2]);
                                                  iVar11 = local_58[(int)local_64 * 2 + 1];
                                                  if (*(int *)(PF_PART4(local_28, 4) + 4) == 9) {
                                                    uVar32 = recovered_2064410((int)local_8538,
                                                                               puVar29,(int)local_30
                                                                              );
                                                  }
                                                  local_5c = (int)((ulonglong)uVar32 >> 0x20);
                                                  local_44 = (uint)uVar32;
                                                  uVar12 = local_44;
                                                  uVar14 = recovered_2064530((int)local_8538,puVar29
                                                                             ,(uint)puVar29,
                                                                             uVar27 + iVar11 +
                                                                             (uint)CARRY4(uVar20,
                                                  uVar22),(char *)local_30,local_8c,local_88,
                                                  local_44,local_5c,(char *)&local_194);
                                                  if ((char)uVar14 == '\0') goto LAB_020623b2;
LAB_02061d9c:
                                                  uVar20 = local_3c + 1;
                                                  local_60 = (int *)((int)local_60 +
                                                                    (uint)(0xfffffffe < local_3c));
                                                  local_3c = uVar20;
                                                } while (local_60 < PF_PART4(local_84, 4) ||
                                                         (uint)((int)local_60 - (int)PF_PART4(local_84, 4))
                                                         < (uint)(uVar20 < (uint)local_84));
                                              }
                                              goto LAB_02061b6e;
                                            }
                                            pcVar23 = str_020c7f27;
                                          }
                                          else {
                                            pcVar23 = str_020c7ef8;
                                          }
                                        }
                                        else {
                                          pcVar23 = str_020c7ec9;
                                        }
                                      }
                                      else {
                                        pcVar23 = str_020c7e90;
                                      }
                                      pcVar34 = (char *)local_38;
LAB_020623aa:
                                      pf_varargs_20044f0__4_
                                                ((char *)&local_194,0xc0,pcVar23,(uint)pcVar34);
LAB_020623b2:
                                      recovered_2001710(local_7c);
                                      piVar24 = local_14;
                                      recovered_2001710((void *)local_14[0x4c9]);
                                      piVar24[0x4c9] = 0;
                                      recovered_2001710((void *)piVar24[0x4c8]);
                                      piVar24[0x4c8] = 0;
                                      piVar24[0x4c6] = 0;
                                      piVar24[0x4c5] = 0;
                                      piVar24[0x4c7] = 0;
                                      recovered_2001e00(local_58,0,0x300);
                                      recovered_2001e00(local_50,0,0x300);
                                      recovered_2001e00(local_40,0,0x140);
                                      piVar24[0x2ec] = 0;
                                      piVar24[0x2eb] = 0;
                                      piVar24[0x2ee] = 0;
                                      piVar24[0x2ed] = 0;
                                      piVar24[0x2f0] = 0;
                                      piVar24[0x2ef] = 0;
                                      piVar24[0x2f2] = 0;
                                      piVar24[0x2f1] = 0;
                                      piVar24[0x2ea] = 0;
                                      piVar24[0x2e9] = 0;
                                      piVar24[0x2e6] = 0;
                                      piVar24[0x2e7] = 0;
                                      piVar24[0x2e8] = 0;
                                      piVar24[0x2f4] = 0;
                                      piVar24[0x2f3] = 0;
                                      *(char *)((int)piVar24 + 0x46) = '\0';
                                      *(char *)(piVar24 + 0x11) = '\0';
                                      piVar24 = piVar24 + 0x1b6;
                                      pcVar23 = str_020c8111;
                                      if ((char)local_194 == '\0') goto LAB_02061441;
                                      goto LAB_020613bc;
                                    }
LAB_02061b6e:
                                    local_38 = (uint *)((int)local_38 + 1);
                                  } while (local_38 < local_8520);
                                }
                                piVar24 = local_14;
                                puVar21 = local_2c;
                                if ((char)*local_2c == '\0') {
                                  puVar29 = (uint *)(local_1c + 0x87b14d);
                                  puVar21 = local_34;
                                  do {
                                    cVar17 = *(char *)((int)puVar29 + -1);
                                    if ((cVar17 == '/') || (cVar17 == '\\')) {
                                      puVar21 = puVar29;
                                    }
                                    else if (cVar17 == '\0') break;
                                    puVar29 = (uint *)((int)puVar29 + 1);
                                  } while( true );
                                }
                                piVar13 = local_14 + 0x2e9;
                                pf_varargs_202ce90__4_(str_020c8044,(uint)puVar21);
                                piVar24[0x2e6] = (int)local_7c;
                                piVar24[0x2e7] = (int)(int *)local_28;
                                piVar24[0x2e8] = local_78;
                                if ((char)piVar24[0xa6] != '\0') {
                                  recovered_20654f0((int *)local_8538,(char *)local_4c,(int)piVar13)
                                  ;
                                }
                                piVar26 = local_14 + 0x2eb;
                                piVar1 = local_14 + 0x2ed;
                                if (*piVar13 == 0 && piVar24[0x2ea] == 0) {
                                  recovered_20654f0((int *)local_8538,str_020c8065,(int)piVar13);
                                }
                                piVar24 = local_14;
                                local_20 = local_14 + 0x2ef;
                                local_18 = local_14 + 0x2f1;
                                recovered_2065660((int)local_8538,str_020c8080,piVar26,piVar1);
                                piVar13 = local_14;
                                uVar12 = (uint)((uint)piVar24[0x2ed] < (uint)piVar24[0x2eb]);
                                uVar20 = piVar24[0x2ee] - piVar24[0x2ec];
                                iVar11 = 0;
                                puVar21 = (uint *)0x0;
                                if ((uint)piVar24[0x2ec] <= (uint)piVar24[0x2ee] && uVar12 <= uVar20
                                   ) {
                                  iVar11 = uVar20 - uVar12;
                                  puVar21 = (uint *)(piVar24[0x2ed] - piVar24[0x2eb]);
                                }
                                local_14[0x2ed] = (int)puVar21;
                                local_14[0x2ee] = iVar11;
                                recovered_2065660((int)local_8538,str_020c8090,local_20,local_18);
                                piVar24 = local_14;
                                uVar12 = (uint)((uint)piVar13[0x2f1] < (uint)piVar13[0x2ef]);
                                uVar20 = piVar13[0x2f2] - piVar13[0x2f0];
                                iVar11 = 0;
                                iVar19 = 0;
                                if ((uint)piVar13[0x2f0] <= (uint)piVar13[0x2f2] && uVar12 <= uVar20
                                   ) {
                                  iVar11 = piVar13[0x2f1] - piVar13[0x2ef];
                                  iVar19 = uVar20 - uVar12;
                                }
                                local_14[0x2f1] = iVar11;
                                local_14[0x2f2] = iVar19;
                                recovered_2065750((int *)local_8538,(int)local_14);
                                *(char *)((int)piVar24 + 0x46) = '\x01';
                                *(char *)(piVar24 + 0x11) = '\x01';
                                *(byte *)(piVar24 + 3) = *(byte *)(piVar24 + 3) & 0xfb;
                                pf_varargs_20044f0__4_
                                          ((char *)(piVar24 + 0x1b6),0xc0,&DAT_020c5119,0x20c80a4);
                                piVar13 = local_14;
                                puVar29 = local_2c;
                                if ((char)piVar24[0x4e] == '\0') {
                                  puVar16 = (uint *)(local_1c + 0x87b14d);
                                  puVar29 = local_34;
                                  do {
                                    cVar17 = *(char *)((int)puVar16 + -1);
                                    if ((cVar17 == '/') || (cVar17 == '\\')) {
                                      puVar29 = puVar16;
                                    }
                                    else if (cVar17 == '\0') break;
                                    puVar16 = (uint *)((int)puVar16 + 1);
                                  } while( true );
                                }
                                pcVar23 = recovered_2062510(local_14[7]);
                                pf_varargs_202ce90__4__4__8_
                                          (str_020c80cb,(uint)puVar29,(uint)pcVar23,
                                           *(ulonglong *)(piVar13 + 0x2e9));
                                if ((char)piVar13[0x4e] == '\0') {
                                  puVar29 = (uint *)(local_1c + 0x87b14d);
                                  local_2c = local_34;
                                  do {
                                    cVar17 = *(char *)((int)puVar29 + -1);
                                    if ((cVar17 == '/') || (cVar17 == '\\')) {
                                      local_2c = puVar29;
                                    }
                                    else if (cVar17 == '\0') break;
                                    puVar29 = (uint *)((int)puVar29 + 1);
                                  } while( true );
                                }
                                pf_varargs_202ce90__4_(str_020c80f8,(uint)local_2c);
                                goto LAB_02061490;
                              }
                              pcVar23 = str_020c7e39;
                            }
                            else {
                              pcVar23 = (char *)0x0;
                              uVar12 = 0x1000;
                              puVar29 = local_84f0 + 2;
                              do {
                                if ((puVar29[-8] & 2) != 0) {
                                  uVar20 = *puVar29;
                                  uVar22 = uVar20;
                                  if (0xfff < uVar20) {
                                    uVar22 = 0x1000;
                                  }
                                  uVar27 = 1;
                                  if (uVar20 != 0 || puVar29[1] != 0) {
                                    uVar27 = uVar22;
                                  }
                                  if (1 < uVar27) {
                                    uVar12 = -uVar27 & (uVar12 - 1) + uVar27;
                                  }
                                  uVar20 = puVar29[-2];
                                  uVar22 = (uint)(~uVar12 < uVar20);
                                  uVar27 = -puVar29[-1];
                                  puVar21 = (uint *)(uVar27 - uVar22);
                                  if (puVar29[-1] != 0 || uVar27 < uVar22) {
                                    pcVar34 = str_020c7df8;
                                    goto LAB_0206209c;
                                  }
                                  *(uint *)(local_533 + (int)pcVar23 * 4 + 0x203) = uVar12;
                                  uVar12 = uVar12 + uVar20;
                                }
                                pcVar23 = (char *)((int)pcVar23 + 1);
                                puVar29 = puVar29 + 0x10;
                              } while (local_8520 != (uint *)pcVar23);
                              local_78 = uVar12 + 0xf & 0xfffffff0;
                              local_28 = CONCAT44(local_78 + 0x500,(int *)local_28);
                              local_78 = local_78 + 0x1900;
                              if (local_78 < 0xfffff000) goto LAB_020618b2;
                              pcVar23 = str_020c7e17;
                            }
                            pcVar34 = &DAT_020c5119;
LAB_0206209c:
                            pf_varargs_20044f0__4_((char *)&local_194,0xc0,pcVar34,(uint)pcVar23);
                            goto LAB_02061438;
                          }
                        }
                      }
                      pcVar23 = str_020c815a;
                    }
                  }
                  else {
                    pcVar23 = str_020c813d;
                  }
                }
                else {
                  pcVar23 = str_020c8123;
                }
              }
LAB_020613a1:
              pcVar34 = &DAT_020c5119;
LAB_020613a6:
              pf_varargs_20044f0__4_((char *)&local_194,0xc0,pcVar34,(uint)pcVar23);
              piVar24 = local_14 + 0x1b6;
LAB_020613bc:
              pcVar23 = (char *)&local_194;
            }
            else {
              pcVar23 = str_020c7dab;
              if (piVar24[5] != 1) {
                pcVar23 = str_020c7db9;
              }
              if (iVar11 < 0xb7) {
                switch((uintptr_t)(iVar11)) {
                case 3:
                  pcVar34 = &DAT_020c5f80;
                  break;
                default:
switchD_02061378_caseD_4:
                  pcVar34 = str_020c5bb8;
                  break;
                case 8:
                  pcVar34 = &DAT_020c5f8c;
                  break;
                case 0x14:
                  pcVar34 = str_020c7875;
                  break;
                case 0x15:
                  pcVar34 = str_020c787d;
                  break;
                case 0x28:
                  pcVar34 = &DAT_020c5fa8;
                  break;
                case 0x3e:
                  pcVar34 = str_020c5f85;
                }
              }
              else if (iVar11 == 0xb7) {
                pcVar34 = str_020c7d21;
              }
              else if (iVar11 == 0xf3) {
                pcVar34 = str_020c7d29;
              }
              else {
                if (iVar11 != 0x102) goto switchD_02061378_caseD_4;
                pcVar34 = str_020c7887;
              }
              pf_varargs_20044f0__4__4_
                        ((char *)&local_194,0xc0,str_020c7d66,(uint)pcVar23,(uint)pcVar34);
LAB_02061438:
              pcVar23 = (char *)&local_194;
              piVar24 = local_14 + 0x1b6;
            }
LAB_02061441:
            pf_varargs_20044f0__4_((char *)piVar24,0xc0,&DAT_020c5119,(uint)pcVar23);
            if ((char)local_14[0x1b6] == '\0') {
              pcVar23 = str_020c7ae5;
              if ((char)local_194 != '\0') {
                pcVar23 = (char *)&local_194;
              }
              pf_varargs_20044f0__4_((char *)(local_14 + 0x1b6),0xc0,&DAT_020c5119,(uint)pcVar23);
            }
LAB_02061490:
            piVar24 = local_14;
            recovered_2062590((int)local_14);
            pf_varargs_202ce90__4__4_(str_020c7b0b,(uint)local_34,(uint)(piVar24 + 0x1e6));
            if (param_7 != (undefined1 *)0x0) {
              *param_7 = 1;
            }
            uVar14 = CONCAT31((int3)((uint)puVar21 >> 8),1);
            if (param_4 == (void *)0x0) {
              return uVar14;
            }
            piVar24 = local_14;
LAB_02060573:
            recovered_2001b70(param_4,piVar24,0x1328);
            return uVar14;
          }
          recovered_2001e00(local_8538,0,0x7e00);
          uVar12 = recovered_202a350(local_8538,0x40,(uint *)&local_6f8);
          if (uVar12 == 0) goto LAB_02060790;
          if (local_6f8 < (int *)0x41) {
            if (local_6f8 != (int *)0x0) goto LAB_02060653;
          }
          else {
            local_6f8 = (int *)0x40;
LAB_02060653:
            piVar24 = (int *)0x0;
            puVar25 = local_8348;
            do {
              local_34 = (uint *)*puVar25;
              if ((uint *)*puVar25 != param_3) {
                recovered_2001e00(&local_70,0,0xc);
                uVar12 = recovered_202ad00((int)local_34,in_EDX,&local_70);
                if (((uVar12 != 0) && ((local_68 & 2) == 0)) &&
                   ((local_6c != (int *)0x0 && (local_70 != (int *)0x0)))) goto LAB_020606b7;
              }
              piVar24 = (int *)((int)piVar24 + 1);
              puVar25 = puVar25 + 0x7e;
            } while (piVar24 < local_6f8);
          }
          recovered_2001e00(&local_70,0,0xc);
        }
LAB_02060790:
        pcVar23 = str_020c7a27;
        goto LAB_020604ed;
      }
    }
  }
LAB_020604e8:
  pcVar23 = str_020c79e6;
LAB_020604ed:
  pf_varargs_20044f0__4_(param_5,param_6,&DAT_020c5119,(uint)pcVar23);
  return 0;
}
#undef DAT_020c5119
#undef DAT_020c5f80
#undef DAT_020c5f8c
#undef DAT_020c5fa8
#undef DAT_020c79e2
#undef DAT_020c79e3
#undef DAT_020c79e4
#undef DAT_020c79e5
#undef DAT_020c7c4d
#undef DAT_020c7c86
#undef DAT_020c7d60
#undef DAT_020c7d63
#undef DAT_020d9d5c
#undef DAT_021ec4ec
#undef DAT_021ec533
#undef DAT_021ec624
#undef DAT_02238eec
#undef PTR_recovered_2001b70_020d806c
#undef PTR_recovered_2001c30_020d8070
#undef PTR_recovered_2001e00_020d8074
#undef PTR_recovered_2001ff0_020d8068
#undef PTR_recovered_2002270_020d8080
#undef PTR_recovered_20022a0_020d807c
#undef PTR_recovered_20044f0_020d8078
#undef PTR_recovered_2019320_020d8084
#undef str_020c5bb8
#undef str_020c5f85
#undef str_020c7875
#undef str_020c787d
#undef str_020c7887
#undef str_020c79e6
#undef str_020c7a0c
#undef str_020c7a27
#undef str_020c7a4a
#undef str_020c7a77
#undef str_020c7a97
#undef str_020c7ae5
#undef str_020c7b0b
#undef str_020c7b24
#undef str_020c7b46
#undef str_020c7b6c
#undef str_020c7b82
#undef str_020c7b9d
#undef str_020c7bb4
#undef str_020c7bef
#undef str_020c7c03
#undef str_020c7c18
#undef str_020c7c32
#undef str_020c7c55
#undef str_020c7c67
#undef str_020c7c73
#undef str_020c7c7e
#undef str_020c7c8b
#undef str_020c7cba
#undef str_020c7d21
#undef str_020c7d29
#undef str_020c7d2f
#undef str_020c7d66
#undef str_020c7dab
#undef str_020c7db9
#undef str_020c7dc4
#undef str_020c7df8
#undef str_020c7e17
#undef str_020c7e39
#undef str_020c7e5e
#undef str_020c7e90
#undef str_020c7ec9
#undef str_020c7ef8
#undef str_020c7f27
#undef str_020c7f54
#undef str_020c7f92
#undef str_020c7fbd
#undef str_020c7ff2
#undef str_020c8026
#undef str_020c8044
#undef str_020c8065
#undef str_020c8080
#undef str_020c8090
#undef str_020c80cb
#undef str_020c80f8
#undef str_020c8111
#undef str_020c8123
#undef str_020c813d
#undef str_020c815a
#undef str_020c8189
#undef str_020c81ad
#undef local_8538
#undef local_8530
#undef local_852f
#undef local_852c
#undef local_8524
#undef local_8520
#undef local_851c
#undef local_8518
#undef local_8510
#undef local_850c
#undef local_84f0
#undef local_8348
#undef local_6b98
#undef local_738
#undef local_734
#undef local_6f8
#undef local_6f4
#undef local_6f0
#undef local_6ec
#undef local_6e8
#undef local_6e4
#undef local_6e0
#undef local_6dc
#undef local_6d8
#undef local_6d4
#undef local_6d3
#undef local_693
#undef local_673
#undef local_613
#undef local_573
#undef local_533
#undef local_330
#undef local_32c
#undef local_328
#undef local_318
#undef local_314
#undef local_308
#undef local_304
#undef local_2f8
#undef local_2f4
#undef local_1b0
#undef local_198
#undef local_194
#undef auStack_6d18
#undef local_190
#undef local_17c
#undef local_178
#undef local_16c
#undef local_168
#undef local_d4
#undef local_d0
#undef local_cc
#undef local_bc
#undef local_b8
#undef local_ac
#undef local_a8
#undef local_9c
#undef local_98
#undef local_94
#undef local_90
#undef local_8c
#undef local_88
#undef local_84
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef local_68
#undef local_64
#undef local_60
#undef local_5c
#undef local_58
#undef local_54
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
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
