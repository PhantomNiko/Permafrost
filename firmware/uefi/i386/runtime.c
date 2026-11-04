/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000
 */

int __cdecl FUN_00001000(int param_1)

{
  char cVar1;
  int local_8;
  
  cVar1 = FUN_000010c0(param_1);
  if (cVar1 == '\0') {
    local_8 = 0;
  }
  else {
    local_8 = FUN_00001100(param_1);
    if (-1 < local_8) {
      uintptr_t cr0,cr4;
      __asm__ volatile("mov %%cr0,%0":"=r"(cr0));
      if(cr0 & 0x80000000U) __asm__ volatile("mov %0,%%cr0"::"r"(cr0 & 0x7fffffffU):"memory");
      __asm__ volatile("mov %%cr4,%0":"=r"(cr4));
      __asm__ volatile("mov %0,%%cr4; mov %1,%%cr3; mov %2,%%cr0"::"r"(cr4|0x20),"r"((uintptr_t)0x2f8000),"r"(cr0|0x80000001U):"memory");
      local_8 = 0;
    }
  }
  return local_8;
}



#define local_5 (*(undefined1 *)(frame + 27))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10c0
 */

undefined1 FUN_000010c0(int param_1)

{
  unsigned char frame[64] = {0};


  if (param_1 == 0) {
    local_5 = 0;
  }
  else if (*(int *)(param_1 + 0x498) == 0) {
    local_5 = 0;
  }
  else {
    local_5 = 1;
  }
  return local_5;
}

#undef local_5

#define local_60 (*(uint *)(frame + 16))
#define local_5c (*(uint *)(frame + 20))
#define local_3c (*(uint *)(frame + 52))
#define local_2c (*(uint *)(frame + 68))
#define local_20 (*(uint *)(frame + 80))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1100
 */

undefined4 FUN_00001100(int param_1)

{
  unsigned char frame[144] = {0};

  uint uVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  bool bVar6;

  cVar4 = FUN_000010c0(param_1);
  if (cVar4 != '\0') {
    FUN_00004090(0x2f7000,0x9000);
    for (local_20 = 0; local_20 < 4; local_20 = local_20 + 1) {
      uVar5 = local_20 * 0x1000 + 0x2f9000;
      FUN_000040d0(0x2f8000,local_20,uVar5 | 1,0);
      for (local_2c = 0; local_2c < 0x200; local_2c = local_2c + 1) {
        FUN_000040d0(uVar5,local_2c,local_20 * 0x40000000 + local_2c * 0x200000 | 0x83,
                     (local_20 >> 2) + (local_2c >> 0xb) +
                     (uint)CARRY4(local_20 * 0x40000000,local_2c * 0x200000));
      }
    }
    for (local_3c = 0; local_3c < *(uint *)(param_1 + 0x498) && local_3c < 0x10;
        local_3c = local_3c + 1) {
      uVar5 = *(uint *)(param_1 + 0x49c + local_3c * 4);
      uVar1 = *(uint *)(param_1 + 0x51c + local_3c * 4);
      iVar2 = *(int *)(param_1 + 0x55c + local_3c * 4);
      uVar3 = *(uint *)(param_1 + 0x4dc + local_3c * 4);
      local_60 = 0;
      for (local_5c = 0; local_5c < (local_60 < uVar3); local_5c = local_5c + bVar6) {
        FUN_00004110(uVar5 + local_60,local_5c + CARRY4(uVar5,local_60),uVar1 + local_60,
                     iVar2 + local_5c + (uint)CARRY4(uVar1,local_60),0x83);
        bVar6 = 0xffdfffff < local_60;
        local_60 = local_60 + 0x200000;
      }
    }
  }
  return 0;
}

#undef local_60
#undef local_5c
#undef local_3c
#undef local_2c
#undef local_20

#undef DAT_00009000
#define DAT_00009000 (*(uint8_t *)(((uintptr_t)efi_state + 0x2000U)))
#undef DAT_000095a8
#define DAT_000095a8 (*(uint *)(((uintptr_t)efi_state + 0x25a8U)))
#undef DAT_000095ac
#define DAT_000095ac (*(uint32_t *)(((uintptr_t)efi_state + 0x25acU)))
#undef DAT_000095b0
#define DAT_000095b0 (*(int * *)(((uintptr_t)efi_state + 0x25b0U)))
#undef DAT_000095b4
#define DAT_000095b4 (*(int * *)(((uintptr_t)efi_state + 0x25b4U)))
#undef DAT_000095b8
#define DAT_000095b8 (*(uint8_t *)(((uintptr_t)efi_state + 0x25b8U)))
#undef DAT_00009c08
#define DAT_00009c08 (*(int *)(((uintptr_t)efi_state + 0x2c08U)))
#undef DAT_00009c0c
#define DAT_00009c0c (*(int *)(((uintptr_t)efi_state + 0x2c0cU)))
#define local_64 (*(int *)(frame + 72))
#define local_60 (*(undefined8 *)(frame + 76))
#define local_58 (*(uint *)(frame + 84))
#define local_54 (*(uint *)(frame + 88))
#define local_50 (*(uint *)(frame + 92))
#define local_4c (*(uint *)(frame + 96))
#define auStack_40 (*(uint (*)[3])(frame + 108))
#define local_41 (*(char *)(frame + 107))
#define auStack_34 (*(uint (*)[3])(frame + 120))
#define local_1c (*(int *)(frame + 144))
#define auStack_28 (*(uint (*)[3])(frame + 132))
#define local_18 (*(uint *)(frame + 148))
#define uStack_9c (*(uint *)(frame + 16))
#define uStack_98 (*(uint *)(frame + 20))
#define uStack_7c (*(uint *)(frame + 48))
#define uStack_78 (*(uint *)(frame + 52))
#define local_70 (*(int *)(frame + 60))
#define local_6c (*(undefined * *)(frame + 64))
#define local_68 (*(undefined4 *)(frame + 68))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1350
 */

uint FUN_00001350(uint image_handle,uint system_table)

{
  unsigned char frame[204] = {0};

  uint uVar1;

  local_1c = 0;
  local_41 = '\0';
  local_4c = 0;
  local_50 = 0;
  local_54 = 0;
  local_58 = 0;
  local_60 = 0;
  local_64 = 0;
  local_68 = 0;
  local_6c = (undefined *)0x0;
  local_70 = 0;
  if (system_table == 0) {
    local_18 = 0x80000001;
  }
  else {
    DAT_000095a8 = system_table;
    DAT_000095ac = *(undefined4 *)(system_table + 0x3c);
    DAT_000095b0 = *(int **)(system_table + 0x2c);
    DAT_000095b4 = *(int **)(system_table + 0x24);
    FUN_000019f0();
    if (DAT_000095b0 == (int *)0x0) {
      local_18 = 0x80000001;
    }
    else {
      FUN_00001a50();
      uVar1 = FUN_00001a90();
      if ((int)uVar1 < 0) {
        FUN_00001ad0((uintptr_t)(efi_state+0x1000));
        FUN_00001b10(uVar1,0);
        FUN_00001ad0((uintptr_t)(efi_state+0x106a));
        local_18 = uVar1;
      }
      else {
        uVar1 = FUN_00001ba0(&local_64,&local_68);
        if ((int)uVar1 < 0) {
          FUN_00001ad0((uintptr_t)(efi_state+0x1070));
          FUN_00001b10(uVar1,0);
          FUN_00001ad0((uintptr_t)(efi_state+0x106a));
          local_18 = uVar1;
        }
        else {
          if (*DAT_000095b0 != 0) {
            (*(code *)*DAT_000095b0)(DAT_000095b0,0);
          }
          if ((DAT_000095b4 != (int *)0x0) && (*DAT_000095b4 != 0)) {
            (*(code *)*DAT_000095b4)(DAT_000095b4,0);
          }
          if (DAT_000095b0[5] != 0) {
            (*(code *)DAT_000095b0[5])(DAT_000095b0,7);
          }
          if (DAT_000095b0[6] != 0) {
            (*(code *)DAT_000095b0[6])(DAT_000095b0);
          }
          FUN_00001ad0((uintptr_t)(efi_state+0x10d0));
          FUN_00001ad0((uintptr_t)(efi_state+0x10ea));
          uVar1 = FUN_00001c50(&local_1c,(int *)&local_50);
          if ((int)uVar1 < 0) {
            FUN_00001ad0((uintptr_t)(efi_state+0x1138));
            FUN_00001b10(uVar1,0);
            FUN_00001ad0((uintptr_t)(efi_state+0x106a));
            local_18 = uVar1;
          }
          else {
            uVar1 = FUN_00001fa0(local_1c,auStack_28,auStack_34,&local_41);
            if ((int)uVar1 < 0) {
              FUN_00001ad0((uintptr_t)(efi_state+0x118a));
              FUN_00001b10(uVar1,0);
              FUN_00001ad0((uintptr_t)(efi_state+0x106a));
              local_18 = uVar1;
            }
            else {
              FUN_00001ad0((uintptr_t)(efi_state+0x11e0));
              FUN_00002110(local_50,local_4c);
              FUN_00001ad0((uintptr_t)(efi_state+0x1218));
              FUN_00001ad0((uintptr_t)(efi_state+0x122e));
              FUN_00002110(auStack_28[0],0);
              FUN_00001ad0((uintptr_t)(efi_state+0x106a));
              if (local_41 != '\0') {
                FUN_00001ad0((uintptr_t)(efi_state+0x1274));
                FUN_00002110(auStack_34[0],0);
                FUN_00001ad0((uintptr_t)(efi_state+0x106a));
              }
              if ((local_1c == 0) || (*(int *)(local_1c + 8) == 0)) {
                uStack_7c = local_50;
                uStack_78 = local_4c;
              }
              else {
                uVar1 = *(uint *)(*(int *)(local_1c + 8) + 0x18);
                uStack_7c = uVar1 + 1;
                uStack_78 = *(int *)(*(int *)(local_1c + 8) + 0x1c) + (uint)(0xfffffffe < uVar1);
              }
              local_58 = uStack_7c;
              local_54 = uStack_78;
              local_60 = FUN_00002270();
              uVar1 = FUN_000023b0(local_1c,auStack_28,auStack_34,local_41,&DAT_000095b8,
                                   (uint *)&local_6c,auStack_40);
              if ((int)uVar1 < 0) {
                FUN_00001ad0((uintptr_t)(efi_state+0x12bc));
                FUN_00001b10(uVar1,0);
                FUN_00001ad0((uintptr_t)(efi_state+0x106a));
                local_18 = uVar1;
              }
              else {
                uVar1 = FUN_00002520(0,0x10000,&local_70);
                if ((int)uVar1 < 0) {
                  FUN_00001ad0((uintptr_t)(efi_state+0x1302));
                  FUN_00001b10(uVar1,0);
                  FUN_00001ad0((uintptr_t)(efi_state+0x106a));
                  local_18 = uVar1;
                }
                else {
                  uVar1 = FUN_00002560((uint *)&DAT_00009000);
                  if ((int)uVar1 < 0) {
                    FUN_00001ad0((uintptr_t)(efi_state+0x1360));
                    FUN_00001b10(uVar1,0);
                    FUN_00001ad0((uintptr_t)(efi_state+0x106a));
                    local_18 = uVar1;
                  }
                  else {
                    if (DAT_00009c08 == 0 && DAT_00009c0c == 0) {
                      uStack_9c = 0;
                      uStack_98 = 0;
                    }
                    else {
                      uStack_9c = local_58;
                      uStack_98 = local_54;
                    }
                    FUN_000036e0(local_1c,auStack_40,local_50,local_4c,uStack_9c,uStack_98,
                                 (int *)&DAT_00009000,(uint)local_60,PF_PART4(local_60, 4),local_64,
                                 local_68,(undefined4 *)&DAT_000095b8);
                    FUN_00001ad0((uintptr_t)(efi_state+0x13ac));
                    FUN_00004030();
                    FUN_00004070(local_6c,local_70 + 0x10000,&DAT_00009000);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return local_18;
}

#undef DAT_00009000
#undef DAT_000095a8
#undef DAT_000095ac
#undef DAT_000095b0
#undef DAT_000095b4
#undef DAT_000095b8
#undef DAT_00009c08
#undef DAT_00009c0c
#undef local_64
#undef local_60
#undef local_58
#undef local_54
#undef local_50
#undef local_4c
#undef auStack_40
#undef local_41
#undef auStack_34
#undef local_1c
#undef auStack_28
#undef local_18
#undef uStack_9c
#undef uStack_98
#undef uStack_7c
#undef uStack_78
#undef local_70
#undef local_6c
#undef local_68

#undef DAT_000095ac
#define DAT_000095ac (*(uint *)(((uintptr_t)efi_state + 0x25acU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x19f0
 */

uint FUN_000019f0(void)

{
  unsigned char frame[64] = {0};

  uint in_EAX = 0;

  if ((DAT_000095ac != 0) && (in_EAX = DAT_000095ac, *(int *)(DAT_000095ac + 0x8c) != 0)) {
    in_EAX = (**(code **)(DAT_000095ac + 0x8c))(0,0,0,0,0);
  }
  return in_EAX;
}

#undef DAT_000095ac

#define local_8 (*(int *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1a50
 */

uint FUN_00001a50(void)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  local_8 = 0;
  uVar1 = FUN_000041c0(0x6000,0x1000,2,&local_8);
  return uVar1;
}

#undef local_8

#define local_8 (*(int *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1a90
 */

uint FUN_00001a90(void)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  local_8 = 0;
  uVar1 = FUN_000041c0(0x200000,0x100000,2,&local_8);
  return uVar1;
}

#undef local_8

#undef DAT_000095b0
#define DAT_000095b0 (*(int *)(((uintptr_t)efi_state + 0x25b0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1ad0
 */

int FUN_00001ad0(int param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;

  iVar1 = param_1;
  if ((DAT_000095b0 != 0) && (iVar1 = DAT_000095b0, *(int *)(DAT_000095b0 + 4) != 0)) {
    iVar1 = (**(code **)(DAT_000095b0 + 4))(DAT_000095b0,param_1);
  }
  return iVar1;
}

#undef DAT_000095b0

#define local_40 (*(uint *)(frame + 16))
#define local_3a (*(undefined2 (*)[16])(frame + 22))
#define local_1a (*(undefined2 *)(frame + 54))
#define local_18 (*(uint *)(frame + 56))
#define local_14 (*(uint *)(frame + 60))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1b10
 */

uint FUN_00001b10(uint param_1,uint param_2)

{
  unsigned char frame[112] = {0};

  int iVar1;
  uint uVar2;
  byte bVar3;

  local_18 = param_1;
  local_14 = param_2;
  for (local_40 = 0; local_40 < 0x10; local_40 = local_40 + 1) {
    bVar3 = ('\x0f' - (char)local_40) * '\x04';
    uVar2 = local_18 >> (bVar3 & 0x1f) | local_14 << 0x20 - (bVar3 & 0x1f);
    if ((bVar3 & 0x20) != 0) {
      uVar2 = local_14 >> (bVar3 & 0x1f);
    }
    iVar1 = FUN_00004340(uVar2);
    local_3a[local_40] = (short)iVar1;
  }
  local_1a = 0;
  uVar2 = FUN_00001ad0((int)local_3a);
  return uVar2;
}

#undef local_40
#undef local_3a
#undef local_1a
#undef local_18
#undef local_14

#define local_8 (*(int *)(frame + 24))
#define local_10 (*(int *)(frame + 16))
#define local_c (*(int *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1ba0
 */

int FUN_00001ba0(int *param_1,undefined4 *param_2)

{
  unsigned char frame[64] = {0};


  local_c = 0;
  if ((param_1 == (int *)0x0) || (param_2 == (undefined4 *)0x0)) {
    local_8 = -0x7fffffff;
  }
  else {
    local_10 = FUN_000041c0(0x1000000,0x800000,2,&local_c);
    if (local_10 < 0) {
      local_10 = FUN_000041c0(0,0x800000,2,&local_c);
    }
    if (local_10 < 0) {
      local_8 = local_10;
    }
    else {
      *param_1 = local_c;
      *param_2 = 0x800000;
      local_8 = 0;
    }
  }
  return local_8;
}

#undef local_8
#undef local_10
#undef local_c

#undef DAT_000095ac
#define DAT_000095ac (*(int *)(((uintptr_t)efi_state + 0x25acU)))
#undef DAT_00009c08
#define DAT_00009c08 (*(uint8_t *)(((uintptr_t)efi_state + 0x2c08U)))
#undef _DAT_00009c08
#define _DAT_00009c08 (*(uint64_t *)(((uintptr_t)efi_state + 0x2c08U)))
#define local_1c (*(uint *)(frame + 48))
#define local_18 (*(int *)(frame + 52))
#define local_10 (*(int *)(frame + 60))
#define iStack_3c (*(int *)(frame + 16))
#define uStack_38 (*(undefined4 *)(frame + 20))
#define uStack_34 (*(undefined4 *)(frame + 24))
#define uStack_30 (*(undefined4 *)(frame + 28))
#define uStack_2c (*(undefined4 *)(frame + 32))
#define iStack_24 (*(int *)(frame + 40))
#define uStack_20 (*(uint *)(frame + 44))
#define iStack_14 (*(int *)(frame + 56))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1c50
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00001c50(int *param_1,int *param_2)

{
  unsigned char frame[108] = {0};

  uint uVar1;
  int iVar2;
  bool bVar3;

  local_18 = 0;
  local_1c = 0;
  if ((param_1 == (int *)0x0) || (param_2 == (int *)0x0)) {
    local_10 = -0x7fffffff;
  }
  else {
    *param_1 = 0;
    param_2[1] = 0;
    *param_2 = 0;
    if (((DAT_000095ac == 0) || (*(int *)(DAT_000095ac + 0xa8) == 0)) ||
       (*(int *)(DAT_000095ac + 0x58) == 0)) {
      local_10 = -0x7fffffff;
    }
    else {
      iStack_14 = (**(code **)(DAT_000095ac + 0xa8))(2,(uintptr_t)(efi_state+0x0),0,&local_1c,&local_18);
      if (iStack_14 < 0) {
        local_10 = iStack_14;
      }
      else {
        for (uStack_20 = 0; uStack_20 < local_1c; uStack_20 = uStack_20 + 1) {
          iStack_24 = 0;
          uStack_2c = 0;
          uStack_30 = 0;
          uStack_34 = 0;
          uStack_38 = 0;
          iStack_14 = (**(code **)(DAT_000095ac + 0x58))
                                (*(undefined4 *)(local_18 + uStack_20 * 4),(uintptr_t)(efi_state+0x0),&iStack_24);
          if ((((-1 < iStack_14) && (iStack_24 != 0)) &&
              ((*(int *)(iStack_24 + 8) != 0 &&
               ((*(char *)(*(int *)(iStack_24 + 8) + 5) != '\0' &&
                (*(char *)(*(int *)(iStack_24 + 8) + 6) == '\0')))))) &&
             (iStack_14 = FUN_00004380(iStack_24,(undefined8 *)&uStack_30,(undefined8 *)&uStack_38),
             -1 < iStack_14)) {
            *param_1 = iStack_24;
            *(ulonglong *)param_2 = CONCAT44(uStack_34,uStack_38);
            _DAT_00009c08 = CONCAT44(uStack_2c,uStack_30);
            if (*(int *)(DAT_000095ac + 0x30) != 0) {
              (**(code **)(DAT_000095ac + 0x30))(local_18);
            }
            return 0;
          }
        }
        for (uStack_20 = 0; uStack_20 < local_1c; uStack_20 = uStack_20 + 1) {
          iStack_3c = 0;
          iStack_14 = (**(code **)(DAT_000095ac + 0x58))
                                (*(undefined4 *)(local_18 + uStack_20 * 4),(uintptr_t)(efi_state+0x0),&iStack_3c);
          if ((((-1 < iStack_14) && (iStack_3c != 0)) && (*(int *)(iStack_3c + 8) != 0)) &&
             ((*(char *)(*(int *)(iStack_3c + 8) + 5) != '\0' &&
              (uVar1 = *(uint *)(*(int *)(iStack_3c + 8) + 0x18),
              bVar3 = FUN_00004700(iStack_3c,0,0,uVar1 + 1,
                                   *(int *)(*(int *)(iStack_3c + 8) + 0x1c) +
                                   (uint)(0xfffffffe < uVar1)), bVar3)))) {
            *param_1 = iStack_3c;
            uVar1 = *(uint *)(*(int *)(iStack_3c + 8) + 0x18);
            iVar2 = *(int *)(*(int *)(iStack_3c + 8) + 0x1c);
            *param_2 = uVar1 + 1;
            param_2[1] = iVar2 + (uint)(0xfffffffe < uVar1);
            _DAT_00009c08 = 0;
            if (*(int *)(DAT_000095ac + 0x30) != 0) {
              (**(code **)(DAT_000095ac + 0x30))(local_18);
            }
            return 0;
          }
        }
        if (*(int *)(DAT_000095ac + 0x30) != 0) {
          (**(code **)(DAT_000095ac + 0x30))(local_18);
        }
        local_10 = -0x7ffffff2;
      }
    }
  }
  return local_10;
}

#undef DAT_000095ac
#undef DAT_00009c08
#undef _DAT_00009c08
#undef local_1c
#undef local_18
#undef local_10
#undef iStack_3c
#undef uStack_38
#undef uStack_34
#undef uStack_30
#undef uStack_2c
#undef iStack_24
#undef uStack_20
#undef iStack_14

#define uStack_204 (*(undefined2 *)(frame + 20))
#define auStack_202 (*(undefined2 (*)[13])(frame + 22))
#define auStack_1e8 (*(undefined4 (*)[8])(frame + 48))
#define auStack_1c8 (*(undefined4 (*)[112])(frame + 80))
#define local_208 (*(undefined4 *)(frame + 16))
#define local_8 (*(int *)(frame + 528))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1fa0
 */

int FUN_00001fa0(int param_1,uint *param_2,uint *param_3,undefined1 *param_4)

{
  unsigned char frame[568] = {0};

  bool bVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;

  if (((param_2 == (uint *)0x0) || (param_3 == (uint *)0x0)) || (param_4 == (undefined1 *)0x0)) {
    local_8 = -0x7fffffff;
  }
  else {
    FUN_00004090((int)param_2,0xc);
    FUN_00004090((int)param_3,0xc);
    *param_4 = 0;
    local_8 = FUN_00004a90(param_1,0x41,0,&local_208);
    if (-1 < local_8) {
      uVar2 = FUN_00004a70(auStack_202);
      iVar4 = FUN_000049a0(&local_208);
      if (((iVar4 == 0x54504257) && (sVar3 = FUN_00004a70(&uStack_204), sVar3 == 1)) && (uVar2 != 0)
         ) {
        bVar1 = FUN_00004b20(auStack_1e8,param_2);
        if (bVar1) {
          if (((1 < uVar2) && (bVar1 = FUN_00004b20(auStack_1c8,param_3), bVar1)) &&
             (*param_3 != *param_2)) {
            *param_4 = 1;
          }
          return 0;
        }
        return -0x7ffffffd;
      }
      local_8 = -0x7fffffff;
    }
  }
  return local_8;
}

#undef uStack_204
#undef auStack_202
#undef auStack_1e8
#undef auStack_1c8
#undef local_208
#undef local_8

#define local_5c (*(undefined4 *)(frame + 16))
#define local_58 (*(undefined1 (*)[60])(frame + 20))
#define local_18 (*(uint *)(frame + 84))
#define local_14 (*(uint *)(frame + 88))
#define uStack_1c (*(undefined2 *)(frame + 80))
#define uStack_1a (*(undefined2 *)(frame + 82))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2110
 */

uint FUN_00002110(uint param_1,uint param_2)

{
  unsigned char frame[140] = {0};

  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;

  local_18 = param_1;
  local_14 = param_2;
  local_5c = 0x1f;
  uStack_1a = 0;
  if (param_1 == 0 && param_2 == 0) {
    local_5c = 0x1e;
    uStack_1c = 0x30;
  }
  else {
    while ((local_18 != 0 || local_14 != 0) && local_5c != 0) {
      uVar2 = local_14 << 0x1f | local_18 >> 1;
      uVar2 = uVar2 + (local_14 >> 1) + (uint)CARRY4(uVar2,local_14 >> 1);
      *(ushort *)(local_58 + local_5c * 2 + -2) =
           ((ushort)local_18 & 1) + ((short)uVar2 + (short)(uVar2 / 5) * -5) * 2 | 0x30;
      uVar2 = local_14 >> 1;
      uVar4 = local_14 << 0x1f | local_18 >> 1;
      uVar3 = (uVar4 + uVar2 + (uint)CARRY4(uVar4,uVar2)) % 5;
      uVar5 = uVar4 - uVar3;
      lVar1 = (ulonglong)uVar5 * 0xcccccccd;
      local_14 = (int)((ulonglong)lVar1 >> 0x20) + uVar5 * -0x33333334 +
                 (uVar2 - (uVar4 < uVar3)) * -0x33333333;
      local_5c = local_5c + -1;
      local_18 = (uint)lVar1;
    }
  }
  uVar2 = FUN_00001ad0((int)(local_58 + local_5c * 2));
  return uVar2;
}

#undef local_5c
#undef local_58
#undef local_18
#undef local_14
#undef uStack_1c
#undef uStack_1a

#undef DAT_000095ac
#define DAT_000095ac (*(int *)(((uintptr_t)efi_state + 0x25acU)))
#undef DAT_00009c10
#define DAT_00009c10 (*(uint8_t *)(((uintptr_t)efi_state + 0x2c10U)))
#undef DAT_00009c28
#define DAT_00009c28 (*(uint8_t *)(((uintptr_t)efi_state + 0x2c28U)))
#undef DAT_00009c2c
#define DAT_00009c2c (*(uint8_t *)(((uintptr_t)efi_state + 0x2c2cU)))
#define local_20 (*(undefined8 *)(frame + 48))
#define local_40 (*(uint *)(frame + 16))
#define iStack_34 (*(int *)(frame + 28))
#define local_3c (*(int *)(frame + 20))
#define local_30 (*(undefined4 *)(frame + 32))
#define local_2c (*(uint (*)[3])(frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2270
 */

undefined8 FUN_00002270(void)

{
  unsigned char frame[112] = {0};

  int iVar1;
  uint uVar2;
  bool bVar3;

  local_2c[2] = 0x40000;
  local_2c[1] = 0;
  local_2c[0] = 0;
  local_30 = 0;
  local_3c = 0;
  local_40 = 0;
  if ((DAT_000095ac == 0) || (*(int *)(DAT_000095ac + 0x28) == 0)) {
    local_20 = 0;
  }
  else {
    iVar1 = (**(code **)(DAT_000095ac + 0x28))
                      (local_2c + 2,&DAT_00009c10,local_2c + 1,local_2c,&local_30);
    if ((iVar1 < 0) || (local_2c[0] < 0x28)) {
      local_20 = 0;
    }
    else {
      for (iStack_34 = 0; iStack_34 + local_2c[0] <= local_2c[2];
          iStack_34 = local_2c[0] + iStack_34) {
        if (*(int *)(&DAT_00009c10 + iStack_34) == 7) {
          uVar2 = *(uint *)(&DAT_00009c28 + iStack_34) * 0x1000;
          bVar3 = CARRY4(local_40,uVar2);
          local_40 = local_40 + uVar2;
          local_3c = local_3c +
                     (*(int *)(&DAT_00009c2c + iStack_34) << 0xc |
                     *(uint *)(&DAT_00009c28 + iStack_34) >> 0x14) + (uint)bVar3;
        }
      }
      local_20 = CONCAT44(local_3c,local_40);
    }
  }
  return local_20;
}

#undef DAT_000095ac
#undef DAT_00009c10
#undef DAT_00009c28
#undef DAT_00009c2c
#undef local_20
#undef local_40
#undef iStack_34
#undef local_3c
#undef local_30
#undef local_2c

#define local_c (*(uint *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x23b0
 */

uint FUN_000023b0(int param_1,uint *param_2,uint *param_3,char param_4,undefined4 param_5,uint *param_6,
            uint *param_7)

{
  unsigned char frame[64] = {0};


  if (((param_2 == (uint *)0x0) || (param_6 == (uint *)0x0)) || (param_7 == (uint *)0x0)) {
    local_c = 0x80000001;
  }
  else {
    FUN_00001ad0((uintptr_t)(efi_state+0x140a));
    local_c = FUN_00004bc0(param_1,param_2,param_5,param_6);
    if ((int)local_c < 0) {
      FUN_00001ad0((uintptr_t)(efi_state+0x1456));
      FUN_00001b10(local_c,0);
      FUN_00001ad0((uintptr_t)(efi_state+0x106a));
      if ((param_4 != '\0') && (param_3 != (uint *)0x0)) {
        FUN_00001ad0((uintptr_t)(efi_state+0x14a2));
        local_c = FUN_00004bc0(param_1,param_3,param_5,param_6);
        if ((int)local_c < 0) {
          FUN_00001ad0((uintptr_t)(efi_state+0x14f0));
          FUN_00001b10(local_c,0);
          FUN_00001ad0((uintptr_t)(efi_state+0x106a));
        }
        else {
          *param_7 = *param_3;
          param_7[1] = param_3[1];
          param_7[2] = param_3[2];
        }
      }
    }
    else {
      *param_7 = *param_2;
      param_7[1] = param_2[1];
      param_7[2] = param_2[2];
    }
  }
  return local_c;
}

#undef local_c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2520
 */

uint FUN_00002520(int param_1,int param_2,int *param_3)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  uVar1 = FUN_000041c0(param_1,param_2,2,param_3);
  return uVar1;
}


#undef DAT_000095ac
#define DAT_000095ac (*(int *)(((uintptr_t)efi_state + 0x25acU)))
#undef DAT_00049c10
#define DAT_00049c10 (*(uint8_t *)(((uintptr_t)efi_state + 0x42c10U)))
#undef DAT_00049c18
#define DAT_00049c18 (*(uint8_t *)(((uintptr_t)efi_state + 0x42c18U)))
#undef DAT_00049c28
#define DAT_00049c28 (*(uint8_t *)(((uintptr_t)efi_state + 0x42c28U)))
#undef DAT_00049c2c
#define DAT_00049c2c (*(uint8_t *)(((uintptr_t)efi_state + 0x42c2cU)))
#define local_1fc (*(uint *)(frame + 220))
#define local_1f8 (*(uint *)(frame + 224))
#define local_1f4 (*(int *)(frame + 228))
#define uStack_2c8 (*(uint *)(frame + 16))
#define iStack_2c4 (*(int *)(frame + 20))
#define local_1ec (*(uint *)(frame + 236))
#define local_1e8 (*(undefined4 *)(frame + 240))
#define uStack_2bc (*(uint *)(frame + 28))
#define local_1e4 (*(uint *)(frame + 244))
#define uStack_2b8 (*(uint *)(frame + 32))
#define local_1e0 (*(undefined4 *)(frame + 248))
#define uStack_2b4 (*(uint *)(frame + 36))
#define local_1dc (*(uint *)(frame + 252))
#define uStack_2b0 (*(uint *)(frame + 40))
#define iStack_2ac (*(int *)(frame + 44))
#define local_1d8 (*(uint *)(frame + 256))
#define iStack_2a0 (*(int *)(frame + 56))
#define local_1d4 (*(uint *)(frame + 260))
#define iStack_29c (*(int *)(frame + 60))
#define local_1d0 (*(uint * *)(frame + 264))
#define local_1cc (*(uint * *)(frame + 268))
#define uStack_298 (*(undefined8 *)(frame + 64))
#define local_1c8 (*(uint *)(frame + 272))
#define uStack_290 (*(uint *)(frame + 72))
#define iStack_28c (*(int *)(frame + 76))
#define local_198 (*(undefined8 (*)[2])(frame + 320))
#define local_18 (*(int *)(frame + 704))
#define uStack_288 (*(uint *)(frame + 80))
#define uStack_284 (*(uint *)(frame + 84))
#define iStack_280 (*(int *)(frame + 88))
#define iStack_27c (*(int *)(frame + 92))
#define cStack_272 (*(char *)(frame + 102))
#define cStack_271 (*(char *)(frame + 103))
#define uStack_270 (*(undefined8 *)(frame + 104))
#define uStack_268 (*(undefined8 *)(frame + 112))
#define uStack_25c (*(uint *)(frame + 124))
#define uStack_258 (*(undefined8 *)(frame + 128))
#define uStack_250 (*(undefined8 *)(frame + 136))
#define uStack_248 (*(undefined8 *)(frame + 144))
#define uStack_240 (*(undefined8 *)(frame + 152))
#define uStack_238 (*(uint *)(frame + 160))
#define uStack_234 (*(uint *)(frame + 164))
#define uStack_230 (*(undefined8 *)(frame + 168))
#define piStack_228 (*(int * *)(frame + 176))
#define iStack_224 (*(int *)(frame + 180))
#define puStack_220 (*(uint * *)(frame + 184))
#define puStack_21c (*(uint * *)(frame + 188))
#define uStack_218 (*(undefined8 *)(frame + 192))
#define puStack_20c (*(undefined * *)(frame + 204))
#define iStack_208 (*(int *)(frame + 208))
#define iStack_204 (*(int *)(frame + 212))
#define acStack_188 (*(char (*)[368])(frame + 336))
#define local_200 (*(uint *)(frame + 216))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2560
 */

int FUN_00002560(uint *param_1)

{
  unsigned char frame[760] = {0};

  bool bVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined8 uVar9;

  local_1d4 = 0;
  local_1d8 = 0;
  local_1dc = 0x40000;
  local_1e0 = 0;
  local_1e4 = 0;
  local_1e8 = 0;
  local_1ec = 0x400000;
  local_1f4 = 0;
  local_1f8 = 0;
  local_1fc = 0;
  local_200 = 0;
  if (param_1 == (uint *)0x0) {
    local_18 = -0x7fffffff;
  }
  else {
    FUN_00004090((int)param_1,0x5a8);
    FUN_00004090((int)local_198,0x180);
    FUN_00004090((uintptr_t)(efi_state+0x82c10),0x1000);
    FUN_00004090((int)&local_1d0,0x38);
    FUN_000061d0((uintptr_t)(efi_state+0x82c10),&local_1d8,(uint *)0x80000000,(uint *)0x0,(uint *)0x90000000,(uint *)0x0);
    iVar5 = FUN_000062b0((undefined8 *)&local_1d0);
    if (((-1 < iVar5) && (local_1d0 != (uint *)0x0 || local_1cc != (uint *)0x0)) && (local_1c8 != 0)
       ) {
      FUN_000061d0((uintptr_t)(efi_state+0x82c10),&local_1d8,local_1d0,local_1cc,(uint *)((int)local_1d0 + local_1c8),
                   (uint *)((int)local_1cc + (uint)CARRY4((uint)local_1d0,local_1c8)));
    }
    if ((DAT_000095ac == 0) || (*(int *)(DAT_000095ac + 0x28) == 0)) {
      local_18 = -0x7fffffff;
    }
    else {
      iStack_2ac = (**(code **)(DAT_000095ac + 0x28))();
      if ((iStack_2ac < 0) || (local_1e4 < 0x28)) {
        if (-1 < iStack_2ac) {
          iStack_2ac = -0x7fffffff;
        }
        local_18 = iStack_2ac;
      }
      else {
        iStack_204 = iStack_2ac;
        for (iStack_208 = 0; iStack_208 + local_1e4 <= local_1dc;
            iStack_208 = local_1e4 + iStack_208) {
          puStack_20c = &DAT_00049c10 + iStack_208;
          uVar9 = uStack_218;
          if (*(int *)(&DAT_00049c28 + iStack_208) != 0 || *(int *)(&DAT_00049c2c + iStack_208) != 0
             ) {
            uVar9 = *(undefined8 *)(&DAT_00049c18 + iStack_208);
            PF_PART4(uStack_218, 0) = (uint *)uVar9;
            PF_PART4(uStack_218, 4) = (uint *)((ulonglong)uVar9 >> 0x20);
            puVar3 = PF_PART4(uStack_218, 4);
            uVar6 = ~(uint)PF_PART4(uStack_218, 4) >> 0xc;
            if (uVar6 < *(uint *)(&DAT_00049c2c + iStack_208) ||
                uVar6 - *(uint *)(&DAT_00049c2c + iStack_208) <
                (uint)((~(uint)PF_PART4(uStack_218, 4) << 0x14 | ~(uint)(uint *)uStack_218 >> 0xc) <
                      *(uint *)(&DAT_00049c28 + iStack_208))) {
              puStack_21c = (uint *)0xffffffff;
              puStack_220 = (uint *)0xffffffff;
            }
            else {
              uVar6 = *(uint *)(&DAT_00049c28 + iStack_208);
              puStack_220 = (uint *)uStack_218 + uVar6 * 0x400;
              puStack_21c = (uint *)((int)PF_PART4(uStack_218, 4) +
                                    (uint)CARRY4((uint)(uint *)uStack_218,uVar6 * 0x1000) +
                                    (*(int *)(&DAT_00049c2c + iStack_208) << 0xc | uVar6 >> 0x14));
            }
            if (PF_PART4(uStack_218, 4) < puStack_21c ||
                (uint)((int)PF_PART4(uStack_218, 4) - (int)puStack_21c) <
                (uint)((uint *)uStack_218 < puStack_220)) {
              puVar4 = (uint *)uStack_218;
              uStack_218 = uVar9;
              FUN_000061d0((uintptr_t)(efi_state+0x82c10),&local_1d8,puVar4,puVar3,puStack_220,puStack_21c);
              uVar9 = uStack_218;
            }
          }
          uStack_218 = uVar9;
        }
        local_1f4 = 0;
        local_1f8 = 0x80000000;
        local_1fc = 0;
        local_200 = 0x7c000000;
        for (iStack_224 = 0; iStack_224 + local_1e4 <= local_1dc;
            iStack_224 = local_1e4 + iStack_224) {
          piStack_228 = (int *)(&DAT_00049c10 + iStack_224);
          uVar8 = uStack_258;
          uVar9 = uStack_230;
          if ((*piStack_228 == 7) &&
             (*(int *)(&DAT_00049c28 + iStack_224) != 0 || *(int *)(&DAT_00049c2c + iStack_224) != 0
             )) {
            uVar9 = *(undefined8 *)(&DAT_00049c18 + iStack_224);
            PF_PART4(uStack_230, 0) = (uint)uVar9;
            PF_PART4(uStack_230, 4) = (uint)((ulonglong)uVar9 >> 0x20);
            uVar6 = ~PF_PART4(uStack_230, 4) >> 0xc;
            if (uVar6 < *(uint *)(&DAT_00049c2c + iStack_224) ||
                uVar6 - *(uint *)(&DAT_00049c2c + iStack_224) <
                (uint)((~PF_PART4(uStack_230, 4) << 0x14 | ~(uint)uStack_230 >> 0xc) <
                      *(uint *)(&DAT_00049c28 + iStack_224))) {
              uStack_234 = 0xffffffff;
              uStack_238 = 0xffffffff;
            }
            else {
              uVar6 = *(uint *)(&DAT_00049c28 + iStack_224) * 0x1000;
              uStack_238 = (uint)uStack_230 + uVar6;
              uStack_234 = PF_PART4(uStack_230, 4) +
                           (*(int *)(&DAT_00049c2c + iStack_224) << 0xc |
                           *(uint *)(&DAT_00049c28 + iStack_224) >> 0x14) +
                           (uint)CARRY4((uint)uStack_230,uVar6);
            }
            if (PF_PART4(uStack_230, 4) < uStack_234 ||
                PF_PART4(uStack_230, 4) - uStack_234 < (uint)((uint)uStack_230 < uStack_238)) {
              uVar8 = uStack_248;
              if ((PF_PART4(uStack_230, 4) == 0) && ((uStack_238 < 0x300001) <= uStack_234)) {
                if ((uint)uStack_230 < 0x300000) {
                  uStack_2b4 = 0x300000;
                  uStack_2b0 = 0;
                }
                else {
                  uStack_2b4 = (uint)uStack_230;
                  uStack_2b0 = PF_PART4(uStack_230, 4);
                }
                uStack_240 = CONCAT44(uStack_2b0,uStack_2b4);
                if (uStack_234 == 0 || uStack_234 - 1 < (uint)(uStack_238 == 0)) {
                  uStack_2bc = uStack_238;
                  uStack_2b8 = uStack_234;
                }
                else {
                  uStack_2bc = 0;
                  uStack_2b8 = 1;
                }
                PF_PART4(uStack_248, 0) = uStack_2bc;
                PF_PART4(uStack_248, 4) = uStack_2b8;
                uStack_230 = uVar9;
                uStack_240 = FUN_00006570(uStack_2b4,uStack_2b0,0x1000,0);
                uVar8 = FUN_000065c0((uint)uStack_248,PF_PART4(uStack_248, 4),0x1000,0);
                PF_PART4(uStack_248, 0) = (uint)uVar8;
                PF_PART4(uStack_248, 4) = (uint)((ulonglong)uVar8 >> 0x20);
                uVar9 = uStack_230;
                if (PF_PART4(uStack_240, 4) < PF_PART4(uStack_248, 4) ||
                    PF_PART4(uStack_240, 4) - PF_PART4(uStack_248, 4) <
                    (uint)((uint)uStack_240 < (uint)uStack_248)) {
                  bVar7 = (uint)uStack_248 < (uint)uStack_240;
                  uVar6 = (uint)uStack_248 - (uint)uStack_240;
                  iVar5 = PF_PART4(uStack_248, 4) - PF_PART4(uStack_240, 4);
                  uStack_248 = uVar8;
                  FUN_00006610((int)local_198,&local_1d4,(uint)uStack_240,PF_PART4(uStack_240, 4),uVar6,
                               iVar5 - (uint)bVar7,'\0',0);
                  uVar8 = uStack_248;
                  uVar9 = uStack_230;
                }
              }
              uStack_230 = uVar9;
              uStack_248 = uVar8;
              uVar8 = uStack_258;
              uVar9 = uStack_230;
              if ((local_200 != 0 || local_1fc != 0) &&
                 (1 < uStack_234 || 1 - uStack_234 < (uint)(uStack_238 != 0))) {
                if (PF_PART4(uStack_230, 4) == 0) {
                  uStack_2c8 = 0;
                  iStack_2c4 = 1;
                }
                else {
                  uStack_2c8 = (uint)uStack_230;
                  iStack_2c4 = PF_PART4(uStack_230, 4);
                }
                uStack_250 = CONCAT44(iStack_2c4,uStack_2c8);
                PF_PART4(uStack_258, 0) = uStack_238;
                PF_PART4(uStack_258, 4) = uStack_234;
                uStack_250 = FUN_00006570(uStack_2c8,iStack_2c4,0x200000,0);
                uVar8 = FUN_000065c0((uint)uStack_258,PF_PART4(uStack_258, 4),0x200000,0);
                PF_PART4(uStack_258, 0) = (uint)uVar8;
                PF_PART4(uStack_258, 4) = (uint)((ulonglong)uVar8 >> 0x20);
                uVar9 = uStack_230;
                if (PF_PART4(uStack_250, 4) < PF_PART4(uStack_258, 4) ||
                    PF_PART4(uStack_250, 4) - PF_PART4(uStack_258, 4) <
                    (uint)((uint)uStack_250 < (uint)uStack_258)) {
                  bVar7 = (uint)uStack_258 < (uint)uStack_250;
                  uVar6 = (uint)uStack_258 - (uint)uStack_250;
                  iVar5 = PF_PART4(uStack_258, 4) - PF_PART4(uStack_250, 4);
                  uStack_258 = uVar8;
                  FUN_00006610((int)local_198,&local_1d4,(uint)uStack_250,PF_PART4(uStack_250, 4),uVar6,
                               iVar5 - (uint)bVar7,'\x01',0);
                  uVar8 = uStack_258;
                  uVar9 = uStack_230;
                }
              }
            }
          }
          uStack_230 = uVar9;
          uStack_258 = uVar8;
        }
        for (uStack_25c = 0; uStack_25c < local_1d4; uStack_25c = uStack_25c + 1) {
          uStack_268 = local_198[uStack_25c * 3];
          uStack_270 = local_198[uStack_25c * 3 + 1];
          cStack_271 = acStack_188[uStack_25c * 0x18];
          cStack_272 = acStack_188[uStack_25c * 0x18 + 1];
          iStack_280 = 0x1000;
          if (cStack_271 != '\0') {
            iStack_280 = 0x200000;
          }
          iStack_27c = 0;
          uStack_284 = 0;
          if (cStack_271 == '\0') {
            if (*param_1 < 0x10) {
              PF_PART4(uStack_270, 4) = (uint)((ulonglong)uStack_270 >> 0x20);
              bVar7 = PF_PART4(uStack_270, 4) != 0;
              if (bVar7) {
                uStack_270 = 0xffffffff;
              }
              uVar9 = FUN_000065c0((uint)uStack_270,PF_PART4(uStack_270, 4),iStack_280,0);
              PF_PART4(uStack_270, 0) = (uint)uVar9;
              PF_PART4(uStack_270, 4) = (uint)((ulonglong)uVar9 >> 0x20);
              if ((uint)uStack_270 != 0 || PF_PART4(uStack_270, 4) != 0) {
                if (local_1ec == 0) {
LAB_000035e5:
                  uStack_270 = uVar9;
                  uStack_288 = (uint)uStack_270;
                  if (cStack_271 == '\0') {
                    iStack_204 = FUN_00006ac0((uint)uStack_268,PF_PART4(uStack_268, 4),(uint)uStack_270,0);
                    if (iStack_204 < 0) goto LAB_0000366d;
                    FUN_00004090((uint)uStack_268,uStack_288);
                    uStack_284 = (uint)uStack_268;
                  }
                  FUN_00006c60(param_1,uStack_284,uStack_288);
                }
                else if (PF_PART4(uStack_270, 4) == 0 &&
                         (uint)(local_1ec < (uint)uStack_270) <= -PF_PART4(uStack_270, 4)) {
                  local_1ec = local_1ec - (uint)uStack_270;
                }
                else {
                  uStack_268 = CONCAT44(PF_PART4(uStack_268, 4) + CARRY4((uint)uStack_268,local_1ec),
                                        (uint)uStack_268 + local_1ec);
                  uVar6 = (uint)uStack_270 - local_1ec;
                  PF_PART4(uStack_270, 4) = PF_PART4(uStack_270, 4) - ((uint)uStack_270 < local_1ec);
                  uStack_270 = CONCAT44(PF_PART4(uStack_270, 4),uVar6);
                  local_1ec = 0;
                  uVar9 = FUN_000065c0(uVar6,PF_PART4(uStack_270, 4),iStack_280,iStack_27c);
                  PF_PART4(uStack_270, 0) = (uint)uVar9;
                  PF_PART4(uStack_270, 4) = (uint)((ulonglong)uVar9 >> 0x20);
                  if ((uint)uStack_270 != 0 || PF_PART4(uStack_270, 4) != 0) goto LAB_000035e5;
                }
              }
            }
          }
          else {
            while( true ) {
              uVar6 = (uint)uStack_270;
              uVar2 = PF_PART4(uStack_270, 4);
              bVar7 = false;
              if ((((uint)uStack_270 < 0x200000) <= PF_PART4(uStack_270, 4)) &&
                 (bVar7 = false, *param_1 < 0x10)) {
                bVar7 = param_1[0x126] < 0x10;
              }
              if (!bVar7) goto LAB_0000366d;
              iStack_28c = 0;
              uStack_290 = 0;
              uStack_298 = uStack_270;
              uVar9 = FUN_000067f0((uintptr_t)(efi_state+0x82c10),local_1d8,0x80000000,(undefined8 *)0x0,
                                   (undefined8 *)&local_1f8,(undefined8 *)&uStack_290);
              if ((char)uVar9 == '\0') break;
              local_200 = uStack_290 - local_1f8;
              local_1fc = (iStack_28c - local_1f4) - (uint)(uStack_290 < local_1f8);
              if (local_1fc == 0 && (uint)(0x1fffff < local_200) <= -local_1fc) goto LAB_0000366d;
              if (local_1fc < uVar2 || local_1fc - uVar2 < (uint)(local_200 < uVar6)) {
                uStack_298 = CONCAT44(local_1fc,local_200);
              }
              if (PF_PART4(uStack_298, 4) != 0) {
                uStack_298 = 0xffffffff;
              }
              uVar9 = FUN_000065c0((uint)uStack_298,PF_PART4(uStack_298, 4),0x200000,0);
              PF_PART4(uStack_298, 0) = (uint)uVar9;
              PF_PART4(uStack_298, 4) = (uint)((ulonglong)uVar9 >> 0x20);
              if ((uint)uStack_298 == 0 && PF_PART4(uStack_298, 4) == 0) goto LAB_0000366d;
              uVar8 = uVar9;
              if (local_1ec == 0) {
LAB_00003182:
                do {
                  uStack_298 = uVar8;
                  iStack_204 = FUN_00006ac0((uint)uStack_268,PF_PART4(uStack_268, 4),(uint)uStack_298,
                                            PF_PART4(uStack_298, 4));
                  uVar8 = uStack_298;
                  if ((-1 < iStack_204) ||
                     (PF_PART4(uStack_298, 4) == 0 &&
                      (uint)(0x200000 < (uint)uStack_298) <= -PF_PART4(uStack_298, 4))) break;
                  uVar8 = FUN_000065c0(PF_PART4(uStack_298, 4) << 0x1f | (uint)uStack_298 >> 1,
                                       PF_PART4(uStack_298, 4) >> 1,0x200000,0);
                  PF_PART4(uStack_298, 0) = (uint)uVar8;
                  PF_PART4(uStack_298, 4) = (uint)((ulonglong)uVar8 >> 0x20);
                  if ((uint)uStack_298 == 0 && PF_PART4(uStack_298, 4) == 0) break;
                } while (!(local_1fc < PF_PART4(uStack_298, 4) ||
                          local_1fc - PF_PART4(uStack_298, 4) < (uint)(local_200 < (uint)uStack_298)));
                uStack_298 = uVar8;
                if (iStack_204 < 0) {
LAB_00003251:
                  bVar7 = FUN_00006c30((uint)uStack_268,PF_PART4(uStack_268, 4));
                  if (bVar7) {
                    iStack_2a0 = (int)uVar9;
                    iStack_29c = (int)((ulonglong)uVar9 >> 0x20);
                    if (iStack_2a0 != 0 || iStack_29c != 0) {
                      uStack_298 = uVar9;
                      goto LAB_000032cd;
                    }
                  }
                  uStack_268 = CONCAT44(PF_PART4(uStack_268, 4) + (0xffdfffff < (uint)uStack_268),
                                        (uint)uStack_268 + 0x200000);
                  uStack_270 = CONCAT44(PF_PART4(uStack_270, 4) + -1 + (uint)(0x1fffff < (uint)uStack_270),
                                        (uint)uStack_270 - 0x200000);
                }
                else {
                  bVar7 = (uint)uStack_298 == 0;
                  bVar1 = PF_PART4(uStack_298, 4) == 0;
                  if (bVar7 && bVar1) goto LAB_00003251;
LAB_000032cd:
                  uVar6 = local_1f8;
                  uStack_288 = (uint)uStack_298;
                  uStack_284 = local_1f8;
                  param_1[param_1[0x126] + 0x127] = local_1f8;
                  param_1[param_1[0x126] + 0x137] = (uint)uStack_298;
                  param_1[param_1[0x126] + 0x147] = (uint)uStack_268;
                  param_1[param_1[0x126] + 0x157] = PF_PART4(uStack_268, 4);
                  param_1[0x126] = param_1[0x126] + 1;
                  local_1f4 = local_1f4 + (uint)CARRY4(local_1f8,(uint)uStack_298);
                  bVar7 = local_200 < (uint)uStack_298;
                  local_200 = local_200 - (uint)uStack_298;
                  local_1fc = local_1fc - bVar7;
                  if ((param_1[0x167] == 0) || (local_1f8 < param_1[0x167])) {
                    param_1[0x167] = local_1f8;
                  }
                  if (CARRY4(local_1f8,(uint)uStack_298) != 0 ||
                      -(uint)CARRY4(local_1f8,(uint)uStack_298) <
                      (uint)(param_1[0x167] < local_1f8 + (uint)uStack_298)) {
                    param_1[0x168] = (local_1f8 + (uint)uStack_298) - param_1[0x167];
                  }
                  local_1f8 = local_1f8 + (uint)uStack_298;
                  FUN_00006c60(param_1,uVar6,(uint)uStack_298);
                  uStack_268 = CONCAT44(PF_PART4(uStack_268, 4) + CARRY4((uint)uStack_268,uStack_288),
                                        (uint)uStack_268 + uStack_288);
                  uStack_270 = CONCAT44(PF_PART4(uStack_270, 4) - ((uint)uStack_270 < uStack_288),
                                        (uint)uStack_270 - uStack_288);
                }
              }
              else if (PF_PART4(uStack_298, 4) == 0 &&
                       (uint)(local_1ec < (uint)uStack_298) <= -PF_PART4(uStack_298, 4)) {
                local_1ec = local_1ec - (uint)uStack_298;
                uStack_268 = CONCAT44(PF_PART4(uStack_268, 4) + PF_PART4(uStack_298, 4) +
                                      (uint)CARRY4((uint)uStack_268,(uint)uStack_298),
                                      (uint)uStack_268 + (uint)uStack_298);
                uStack_270 = CONCAT44((PF_PART4(uStack_270, 4) - PF_PART4(uStack_298, 4)) -
                                      (uint)((uint)uStack_270 < (uint)uStack_298),
                                      (uint)uStack_270 - (uint)uStack_298);
              }
              else {
                uStack_268 = CONCAT44(PF_PART4(uStack_268, 4) + CARRY4((uint)uStack_268,local_1ec),
                                      (uint)uStack_268 + local_1ec);
                uStack_270 = CONCAT44(PF_PART4(uStack_270, 4) - ((uint)uStack_270 < local_1ec),
                                      (uint)uStack_270 - local_1ec);
                bVar7 = (uint)uStack_298 < local_1ec;
                PF_PART4(uStack_298, 0) = (uint)uStack_298 - local_1ec;
                local_1ec = 0;
                uVar9 = FUN_000065c0((uint)uStack_298,PF_PART4(uStack_298, 4) - bVar7,0x200000,0);
                PF_PART4(uStack_298, 0) = (uint)uVar9;
                PF_PART4(uStack_298, 4) = (uint)((ulonglong)uVar9 >> 0x20);
                uVar8 = uVar9;
                if ((uint)uStack_298 != 0 || PF_PART4(uStack_298, 4) != 0) goto LAB_00003182;
              }
            }
            local_1fc = 0;
            local_200 = 0;
          }
LAB_0000366d:
        }
        bVar7 = true;
        if (param_1[0x21] == 0) {
          bVar7 = param_1[0x124] != 0 || param_1[0x125] != 0;
        }
        local_18 = -0x7ffffff7;
        if (bVar7) {
          local_18 = 0;
        }
      }
    }
  }
  return local_18;
}

#undef DAT_000095ac
#undef DAT_00049c10
#undef DAT_00049c18
#undef DAT_00049c28
#undef DAT_00049c2c
#undef local_1fc
#undef local_1f8
#undef local_1f4
#undef uStack_2c8
#undef iStack_2c4
#undef local_1ec
#undef local_1e8
#undef uStack_2bc
#undef local_1e4
#undef uStack_2b8
#undef local_1e0
#undef uStack_2b4
#undef local_1dc
#undef uStack_2b0
#undef iStack_2ac
#undef local_1d8
#undef iStack_2a0
#undef local_1d4
#undef iStack_29c
#undef local_1d0
#undef local_1cc
#undef uStack_298
#undef local_1c8
#undef uStack_290
#undef iStack_28c
#undef local_198
#undef local_18
#undef uStack_288
#undef uStack_284
#undef iStack_280
#undef iStack_27c
#undef cStack_272
#undef cStack_271
#undef uStack_270
#undef uStack_268
#undef uStack_25c
#undef uStack_258
#undef uStack_250
#undef uStack_248
#undef uStack_240
#undef uStack_238
#undef uStack_234
#undef uStack_230
#undef piStack_228
#undef iStack_224
#undef puStack_220
#undef puStack_21c
#undef uStack_218
#undef puStack_20c
#undef iStack_208
#undef iStack_204
#undef acStack_188
#undef local_200

#undef DAT_000095a8
#define DAT_000095a8 (*(uint32_t *)(((uintptr_t)efi_state + 0x25a8U)))
#undef DAT_000095ac
#define DAT_000095ac (*(uint32_t *)(((uintptr_t)efi_state + 0x25acU)))
#undef DAT_000095b0
#define DAT_000095b0 (*(uint32_t *)(((uintptr_t)efi_state + 0x25b0U)))
#undef DAT_000095b4
#define DAT_000095b4 (*(uint32_t *)(((uintptr_t)efi_state + 0x25b4U)))
#undef DAT_000095b8
#define DAT_000095b8 (*(uint8_t *)(((uintptr_t)efi_state + 0x25b8U)))
#undef DAT_00009c08
#define DAT_00009c08 (*(uint32_t *)(((uintptr_t)efi_state + 0x2c08U)))
#undef IMAGE_DOS_HEADER_00000000
#define IMAGE_DOS_HEADER_00000000 (*(uint32_t *)(0x0U))
#define local_f4 (*(int *)(frame + 16))
#define local_f0 (*(int *)(frame + 20))
#define local_ec (*(int *)(frame + 24))
#define local_e8 (*(int *)(frame + 28))
#define local_e4 (*(int *)(frame + 32))
#define local_dc (*(int *)(frame + 40))
#define local_d8 (*(int *)(frame + 44))
#define local_d4 (*(int *)(frame + 48))
#define local_d0 (*(int *)(frame + 52))
#define local_cc (*(int *)(frame + 56))
#define local_c8 (*(int *)(frame + 60))
#define local_c4 (*(int *)(frame + 64))
#define local_c0 (*(int *)(frame + 68))
#define local_bc (*(int *)(frame + 72))
#define local_b8 (*(int *)(frame + 76))
#define local_b4 (*(undefined4 *)(frame + 80))
#define local_b0 (*(int *)(frame + 84))
#define local_ac (*(int *)(frame + 88))
#define local_a8 (*(undefined4 *)(frame + 92))
#define local_a4 (*(undefined4 *)(frame + 96))
#define local_a0 (*(undefined4 *)(frame + 100))
#define local_9c (*(undefined4 *)(frame + 104))
#define local_94 (*(uint *)(frame + 112))
#define local_8c (*(uint *)(frame + 120))
#define local_88 (*(uint *)(frame + 124))
#define local_84 (*(undefined4 * *)(frame + 128))
#define local_7c (*(undefined4 * *)(frame + 136))
#define local_70 (*(undefined4 *)(frame + 148))
#define local_6c (*(undefined4 *)(frame + 152))
#define local_68 (*(undefined4 *)(frame + 156))
#define local_64 (*(undefined4 *)(frame + 160))
#define local_60 (*(undefined4 *)(frame + 164))
#define local_5c (*(undefined4 *)(frame + 168))
#define local_58 (*(undefined4 *)(frame + 172))
#define local_54 (*(undefined4 *)(frame + 176))
#define local_50 (*(undefined4 *)(frame + 180))
#define local_4c (*(undefined4 *)(frame + 184))
#define local_48 (*(undefined4 *)(frame + 188))
#define local_44 (*(undefined4 *)(frame + 192))
#define local_40 (*(undefined4 *)(frame + 196))
#define local_34 (*(undefined4 * *)(frame + 208))
#define local_30 (*(undefined4 *)(frame + 212))
#define local_2c (*(undefined4 *)(frame + 216))
#define local_28 (*(undefined4 *)(frame + 220))
#define local_24 (*(int *)(frame + 224))
#define local_20 (*(uint *)(frame + 228))
#define uStack_1c (*(uint *)(frame + 232))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x36e0
 */

uint FUN_000036e0(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,int param_6,int *param_7,uint param_8,uint param_9,
            undefined4 param_10,undefined4 param_11,undefined4 *param_12)

{
  unsigned char frame[292] = {0};

  undefined4 *puVar1;
  undefined4 uVar2;
  bool bVar3;

  local_20 = param_8;
  uStack_1c = param_9;
  local_24 = param_6;
  local_28 = param_5;
  local_2c = param_4;
  local_30 = param_3;
  if (param_12 == (undefined4 *)0x0) {
    local_84 = (undefined4 *)&DAT_000095b8;
  }
  else {
    local_84 = param_12;
  }
  local_34 = local_84;
  if ((param_7 == (int *)0x0) || (param_7[0x124] == 0 && param_7[0x125] == 0)) {
    if (param_7 == (int *)0x0) {
      local_94 = 0;
    }
    else {
      local_94 = param_7[0x21];
    }
    local_8c = local_94;
    local_88 = 0;
  }
  else {
    local_8c = param_7[0x124];
    local_88 = param_7[0x125];
  }
  FUN_00004090((int)&local_70,0x38);
  FUN_000062b0((undefined8 *)&local_70);
  if (uStack_1c < local_88 || uStack_1c - local_88 < (uint)(local_20 < local_8c)) {
    local_20 = local_8c;
    uStack_1c = local_88;
  }
  *local_34 = 0x33454657;
  local_34[1] = 1;
  local_34[2] = 0x650;
  local_34[3] = DAT_000095a8;
  local_34[4] = DAT_000095ac;
  local_34[5] = DAT_000095b0;
  local_34[6] = DAT_000095b4;
  local_34[7] = param_1;
  local_34[8] = 0;
  if ((param_1 == 0) || (*(int *)(param_1 + 8) == 0)) {
    local_9c = 0;
  }
  else {
    local_9c = **(undefined4 **)(param_1 + 8);
  }
  local_34[9] = local_9c;
  local_34[10] = local_30;
  if (param_2 == (undefined4 *)0x0) {
    local_a0 = 0;
  }
  else {
    local_a0 = *param_2;
  }
  local_34[0xb] = local_a0;
  if (param_2 == (undefined4 *)0x0) {
    local_a4 = 0;
  }
  else {
    local_a4 = param_2[1];
  }
  local_34[0xc] = local_a4;
  if (param_2 == (undefined4 *)0x0) {
    local_a8 = 0;
  }
  else {
    local_a8 = param_2[2];
  }
  local_34[0xd] = local_a8;
  if ((param_7 == (int *)0x0) || (*param_7 == 0)) {
    local_ac = 0;
  }
  else {
    local_ac = param_7[1];
  }
  local_34[0xe] = local_ac;
  if ((param_7 == (int *)0x0) || (*param_7 == 0)) {
    local_b0 = 0;
  }
  else {
    local_b0 = param_7[0x11];
  }
  local_34[0xf] = local_b0;
  local_34[0x10] = 0;
  local_34[0x11] = 0;
  local_34[0x12] = DAT_00009c08;
  local_34[0x13] = local_70;
  local_34[0x14] = local_68;
  local_34[0x15] = local_64;
  local_34[0x16] = local_60;
  local_34[0x17] = local_5c;
  local_34[0x18] = local_58;
  local_34[0x19] = local_54;
  local_34[0x1a] = local_50;
  local_34[0x1b] = local_4c;
  local_34[0x1c] = local_48;
  local_34[0x1d] = local_44;
  local_34[0x1e] = local_40;
  local_34[0x192] = local_6c;
  local_34[0x1f] = local_20;
  local_34[0x20] = uStack_1c;
  if (local_24 == 0) {
    local_b4 = local_28;
  }
  else {
    local_b4 = 0;
  }
  local_34[0x21] = local_b4;
  local_34[0x22] = 0;
  local_34[0x23] = 0;
  if (param_7 == (int *)0x0) {
    local_b8 = 0;
  }
  else {
    local_b8 = *param_7;
  }
  local_34[0x24] = local_b8;
  for (local_7c = (undefined4 *)0x0; local_7c < 0x10; local_7c = (undefined4 *)((int)local_7c + 1))
  {
    if (param_7 == (int *)0x0) {
      local_bc = 0;
    }
    else {
      local_bc = param_7[(int)local_7c + 1];
    }
    local_34[(int)local_7c + 0x25] = local_bc;
    if (param_7 == (int *)0x0) {
      local_c0 = 0;
    }
    else {
      local_c0 = param_7[(int)local_7c + 0x11];
    }
    local_34[(int)local_7c + 0x35] = local_c0;
  }
  local_34[0x45] = 0;
  local_34[0x46] = 0;
  if (param_7 == (int *)0x0) {
    local_c4 = 0;
  }
  else {
    local_c4 = param_7[0x126];
  }
  local_34[0x47] = local_c4;
  for (local_7c = (undefined4 *)0x0; local_7c < 0x10; local_7c = (undefined4 *)((int)local_7c + 1))
  {
    if (param_7 == (int *)0x0) {
      local_c8 = 0;
    }
    else {
      local_c8 = param_7[(int)local_7c + 0x127];
    }
    local_34[(int)local_7c + 0x48] = local_c8;
    if (param_7 == (int *)0x0) {
      local_cc = 0;
    }
    else {
      local_cc = param_7[(int)local_7c + 0x137];
    }
    local_34[(int)local_7c + 0x58] = local_cc;
    if (param_7 == (int *)0x0) {
      local_d0 = 0;
    }
    else {
      local_d0 = param_7[(int)local_7c + 0x147];
    }
    local_34[(int)local_7c + 0x68] = local_d0;
    if (param_7 == (int *)0x0) {
      local_d4 = 0;
    }
    else {
      local_d4 = param_7[(int)local_7c + 0x157];
    }
    local_34[(int)local_7c + 0x78] = local_d4;
  }
  if (param_7 == (int *)0x0) {
    local_d8 = 0;
  }
  else {
    local_d8 = param_7[0x167];
  }
  local_34[0x88] = local_d8;
  if (param_7 == (int *)0x0) {
    local_dc = 0;
  }
  else {
    local_dc = param_7[0x168];
  }
  local_34[0x89] = local_dc;
  bVar3 = false;
  if (param_7 != (int *)0x0) {
    bVar3 = param_7[0x168] != 0;
  }
  uVar2 = 0;
  if (bVar3) {
    uVar2 = 0xfc000000;
  }
  local_34[0x8a] = uVar2;
  bVar3 = false;
  if (param_7 != (int *)0x0) {
    bVar3 = param_7[0x168] != 0;
  }
  uVar2 = 0;
  if (bVar3) {
    uVar2 = 0x4000000;
  }
  local_34[0x8b] = uVar2;
  local_34[0x8c] = 0;
  local_34[0x8d] = param_10;
  local_34[0x8e] = param_11;
  bVar3 = false;
  if (param_7 != (int *)0x0) {
    bVar3 = param_7[0x22] != 0;
  }
  uVar2 = 0;
  if (bVar3) {
    uVar2 = 0x34364857;
  }
  local_34[0x8f] = uVar2;
  if (param_7 == (int *)0x0) {
    local_e4 = 0;
  }
  else {
    local_e4 = param_7[0x22];
  }
  local_34[0x90] = local_e4;
  local_34[0x91] = 0;
  local_7c = (undefined4 *)0x0;
  puVar1 = local_34;
  while (local_7c < (void *)0x40) {
    if (param_7 == (int *)0x0) {
      local_ec = 0;
      local_e8 = 0;
    }
    else {
      local_ec = param_7[(int)local_7c * 2 + 0x24];
      local_e8 = param_7[(int)local_7c * 2 + 0x25];
    }
    local_34[(int)local_7c * 2 + 0x92] = local_ec;
    local_34[(int)local_7c * 2 + 0x93] = local_e8;
    if (param_7 == (int *)0x0) {
      local_f4 = 0;
      local_f0 = 0;
    }
    else {
      local_f4 = param_7[(int)local_7c * 2 + 0xa4];
      local_f0 = param_7[(int)local_7c * 2 + 0xa5];
    }
    local_34[(int)local_7c * 2 + 0x112] = local_f4;
    local_34[(int)local_7c * 2 + 0x113] = local_f0;
    puVar1 = (undefined4 *)((int)local_7c + 1);
    local_7c = puVar1;
  }
  return (uint)puVar1;
}

#undef DAT_000095a8
#undef DAT_000095ac
#undef DAT_000095b0
#undef DAT_000095b4
#undef DAT_000095b8
#undef DAT_00009c08
#undef IMAGE_DOS_HEADER_00000000
#undef local_f4
#undef local_f0
#undef local_ec
#undef local_e8
#undef local_e4
#undef local_dc
#undef local_d8
#undef local_d4
#undef local_d0
#undef local_cc
#undef local_c8
#undef local_c4
#undef local_c0
#undef local_bc
#undef local_b8
#undef local_b4
#undef local_b0
#undef local_ac
#undef local_a8
#undef local_a4
#undef local_a0
#undef local_9c
#undef local_94
#undef local_8c
#undef local_88
#undef local_84
#undef local_7c
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
#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef uStack_1c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x4030
 */

uint FUN_00004030(void)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  uVar1 = FUN_00006ee0();
  if ((uVar1 & 0x60000000) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00006f00(uVar1 & 0x9fffffff);
  }
  return uVar1;
}


uint FUN_00004070(undefined *entry,int stack,undefined4 context)
{
  FUN_00001000((int)context);
  __asm__ volatile("cli; cld; mov %0,%%esp; jmp *%1"::"r"((uintptr_t)stack&~15U),"r"(entry):"memory");
  __builtin_unreachable();
}


#define local_c (*(uint *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x4090
 */

uint FUN_00004090(int param_1,uint param_2)

{
  unsigned char frame[64] = {0};


  for (local_c = 0; local_c < param_2; local_c = local_c + 1) {
    *(undefined1 *)(param_1 + local_c) = 0;
  }
  return local_c;
}

#undef local_c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x40d0
 */

uint FUN_000040d0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  unsigned char frame[64] = {0};

  undefined4 *puVar1;

  puVar1 = (undefined4 *)(param_1 + param_2 * 8);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  return (uint)puVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x4110
 */

int FUN_00004110(uint param_1,uint param_2,uint param_3,undefined4 param_4,uint param_5)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint uVar2;

  uVar1 = (uint)((param_2 << 2 | param_1 >> 0x1e) < 7);
  uVar2 = (param_2 >> 0x1e) - uVar1;
  if (param_2 >> 0x1e < uVar1) {
    uVar2 = FUN_000040d0((param_2 << 2 | param_1 >> 0x1e) * 0x1000 + 0x2f9000,
                         param_1 >> 0x15 & 0x1ff,param_3 & 0xffe00000 | param_5,param_4);
  }
  return uVar2;
}


#undef DAT_000095ac
#define DAT_000095ac (*(int *)(((uintptr_t)efi_state + 0x25acU)))
#define local_18 (*(int *)(frame + 28))
#define local_14 (*(int *)(frame + 32))
#define iStack_24 (*(int *)(frame + 16))
#define local_10 (*(int *)(frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x41c0
 */

int FUN_000041c0(int param_1,int param_2,undefined4 param_3,int *param_4)

{
  unsigned char frame[84] = {0};

  uint uVar1;
  int iVar2;

  local_18 = param_1;
  local_14 = 0;
  uVar1 = param_2 + 0xfffU >> 0xc;
  if ((((param_4 == (int *)0x0) || (uVar1 == 0)) || (DAT_000095ac == 0)) ||
     (*(int *)(DAT_000095ac + 0x20) == 0)) {
    local_10 = -0x7fffffff;
  }
  else if ((param_1 == 0) ||
          (iVar2 = (**(code **)(DAT_000095ac + 0x20))(2,param_3,uVar1,&local_18), iVar2 < 0)) {
    local_14 = 0;
    local_18 = -1;
    iStack_24 = (**(code **)(DAT_000095ac + 0x20))(1,param_3,uVar1,&local_18);
    if ((iStack_24 < 0) || (local_14 != 0)) {
      if (-1 < iStack_24) {
        iStack_24 = -0x7fffffff;
      }
      local_10 = iStack_24;
    }
    else {
      FUN_00004090(local_18,uVar1 << 0xc);
      *param_4 = local_18;
      local_10 = 0;
    }
  }
  else {
    FUN_00004090(local_18,uVar1 << 0xc);
    *param_4 = local_18;
    local_10 = 0;
  }
  return local_10;
}

#undef DAT_000095ac
#undef local_18
#undef local_14
#undef iStack_24
#undef local_10

#define local_8 (*(int *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x4340
 */

int FUN_00004340(uint param_1)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  uVar1 = param_1 & 0xf;
  if (uVar1 < 10) {
    local_8 = uVar1 + 0x30;
  }
  else {
    local_8 = uVar1 + 0x37;
  }
  return local_8;
}

#undef local_8

#define auStack_1c4 (*(undefined4 (*)[107])(frame + 676))
#define local_458 (*(uint *)(frame + 16))
#define local_454 (*(uint *)(frame + 20))
#define local_450 (*(uint *)(frame + 24))
#define local_438 (*(uint *)(frame + 48))
#define local_42c (*(uint *)(frame + 60))
#define local_418 (*(undefined1 (*)[32])(frame + 80))
#define local_218 (*(undefined1 (*)[72])(frame + 592))
#define local_1d0 (*(undefined4 (*)[2])(frame + 664))
#define local_18 (*(undefined4 *)(frame + 1104))
#define uStack_44c (*(uint *)(frame + 28))
#define auStack_3f8 (*(undefined4 (*)[120])(frame + 112))
#define uStack_1c8 (*(undefined4 *)(frame + 672))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x4380
 */

undefined4 FUN_00004380(int param_1,undefined8 *param_2,undefined8 *param_3)

{
  unsigned char frame[1160] = {0};

  longlong lVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;

  if ((param_2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) {
    local_18 = 0x80000001;
  }
  else {
    *(undefined4 *)((int)param_2 + 4) = 0;
    *(undefined4 *)param_2 = 0;
    *(undefined4 *)((int)param_3 + 4) = 0;
    *(undefined4 *)param_3 = 0;
    if (((param_1 == 0) || (*(int *)(param_1 + 8) == 0)) ||
       (iVar3 = *(int *)(*(int *)(param_1 + 8) + 0x1c),
       iVar3 == 0 && (uint)(1 < *(uint *)(*(int *)(param_1 + 8) + 0x18)) <= (uint)-iVar3)) {
      local_18 = 0x80000001;
    }
    else {
      iVar3 = FUN_00004840(param_1,1,0,local_218);
      if ((iVar3 < 0) || (iVar3 = FUN_00004900((int)local_218,(uintptr_t)(efi_state+0x13e6),8), iVar3 == 0)) {
        local_18 = 0x8000000e;
      }
      else {
        lVar8 = FUN_00004960(local_1d0);
        uVar4 = FUN_000049a0(&uStack_1c8);
        uVar5 = FUN_000049a0(auStack_1c4);
        if (((uVar5 < 0x80) || (0x200 < uVar5)) || (0x400 < uVar4)) {
          local_18 = 0x80000001;
        }
        else {
          for (local_42c = 0; local_42c < uVar4; local_42c = local_42c + 1) {
            local_438 = (uint)((ulonglong)local_42c * (ulonglong)uVar5);
            lVar1 = ((ulonglong)local_42c * (ulonglong)uVar5 >> 9) + lVar8;
            local_438 = local_438 & 0x1ff;
            if (0x200 < local_438 + uVar5) {
              return 0x80000003;
            }
            iVar3 = FUN_00004840(param_1,(uint)lVar1,(uint)((ulonglong)lVar1 >> 0x20),local_418);
            if (iVar3 < 0) {
              return 0x80000001;
            }
            iVar3 = FUN_00004900((int)(local_418 + local_438),(uintptr_t)(efi_state+0x13ef),0x10);
            if ((iVar3 != 0) || (bVar2 = FUN_000049e0((int)(local_418 + local_438),(uintptr_t)(efi_state+0x13ff)), bVar2))
            {
              uVar9 = FUN_00004960((undefined4 *)((int)auStack_3f8 + local_438));
              uVar10 = FUN_00004960((undefined4 *)((int)auStack_3f8 + local_438 + 8));
              local_458 = (uint)uVar10;
              local_454 = (uint)((ulonglong)uVar10 >> 0x20);
              local_450 = (uint)uVar9;
              uStack_44c = (uint)((ulonglong)uVar9 >> 0x20);
              if ((local_454 < uStack_44c || local_454 - uStack_44c < (uint)(local_458 < local_450))
                 || ((uVar6 = *(uint *)(*(int *)(param_1 + 8) + 0x1c),
                     uVar6 < local_454 ||
                     uVar6 - local_454 < (uint)(*(uint *)(*(int *)(param_1 + 8) + 0x18) < local_458)
                     || (uStack_44c != 0)))) {
                return 0x80000001;
              }
              uVar7 = (local_458 - local_450) + 1;
              uVar6 = (local_454 - (local_458 < local_450)) +
                      (uint)(0xfffffffe < local_458 - local_450);
              bVar2 = FUN_00004700(param_1,local_450,0,uVar7,uVar6);
              if (bVar2) {
                *param_2 = uVar9;
                *param_3 = CONCAT44(uVar6,uVar7);
                return 0;
              }
            }
          }
          local_18 = 0x8000000e;
        }
      }
    }
  }
  return local_18;
}

#undef auStack_1c4
#undef local_458
#undef local_454
#undef local_450
#undef local_438
#undef local_42c
#undef local_418
#undef local_218
#undef local_1d0
#undef local_18
#undef uStack_44c
#undef auStack_3f8
#undef uStack_1c8

#define local_22d (*(bool *)(frame + 16))
#define local_228 (*(undefined4 *)(frame + 21))
#define local_28 (*(uint *)(frame + 533))
#define local_24 (*(int *)(frame + 537))
#define local_20 (*(uint *)(frame + 541))
#define local_1c (*(uint *)(frame + 545))
#define local_11 (*(bool *)(frame + 556))
#define auStack_224 (*(undefined2 (*)[254])(frame + 25))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x4700
 */

bool FUN_00004700(int param_1,uint param_2,int param_3,uint param_4,uint param_5)

{
  unsigned char frame[605] = {0};

  uint uVar1;
  short sVar2;
  int iVar3;
  uint uVar4;

  local_20 = param_4;
  local_1c = param_5;
  local_24 = param_3;
  local_28 = param_2;
  if ((((param_1 == 0) || (*(int *)(param_1 + 8) == 0)) ||
      (*(int *)(*(int *)(param_1 + 8) + 0xc) != 0x200)) ||
     ((param_5 < (param_4 < 0x42) ||
      (uVar4 = param_3 + (uint)(0xffffffbe < param_2),
      uVar1 = *(uint *)(*(int *)(param_1 + 8) + 0x1c),
      uVar1 < uVar4 ||
      uVar1 - uVar4 < (uint)(*(uint *)(*(int *)(param_1 + 8) + 0x18) < param_2 + 0x41))))) {
    local_11 = false;
  }
  else {
    iVar3 = FUN_00004840(param_1,param_2 + 0x41,param_3 + (uint)(0xffffffbe < param_2),&local_228);
    if (iVar3 < 0) {
      local_11 = false;
    }
    else {
      iVar3 = FUN_000049a0(&local_228);
      local_22d = false;
      if (iVar3 == 0x54504257) {
        sVar2 = FUN_00004a70(auStack_224);
        local_22d = sVar2 == 1;
      }
      local_11 = local_22d;
    }
  }
  return local_11;
}

#undef local_22d
#undef local_228
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_11
#undef auStack_224

#define local_18 (*(undefined4 *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x4840
 */

undefined4 FUN_00004840(int param_1,uint param_2,uint param_3,undefined4 param_4)

{
  unsigned char frame[72] = {0};

  uint uVar1;

  if ((((param_1 == 0) || (*(int *)(param_1 + 8) == 0)) || (*(int *)(param_1 + 0x10) == 0)) ||
     ((*(int *)(*(int *)(param_1 + 8) + 0xc) != 0x200 ||
      (uVar1 = *(uint *)(*(int *)(param_1 + 8) + 0x1c),
      uVar1 < param_3 || uVar1 - param_3 < (uint)(*(uint *)(*(int *)(param_1 + 8) + 0x18) < param_2)
      )))) {
    local_18 = 0x80000001;
  }
  else {
    local_18 = (**(code **)(param_1 + 0x10))
                         (param_1,**(undefined4 **)(param_1 + 8),param_2,param_3,0x200,param_4);
  }
  return local_18;
}

#undef local_18

#define local_c (*(uint *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x4900
 */

undefined4 FUN_00004900(int param_1,int param_2,uint param_3)

{
  unsigned char frame[64] = {0};


  local_c = 0;
  while( true ) {
    if (param_3 <= local_c) {
      return 1;
    }
    if (*(char *)(param_1 + local_c) != *(char *)(param_2 + local_c)) break;
    local_c = local_c + 1;
  }
  return 0;
}

#undef local_c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x4960
 */

undefined8 FUN_00004960(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;
  undefined4 uVar2;

  uVar1 = FUN_000049a0(param_1);
  uVar2 = FUN_000049a0(param_1 + 1);
  return CONCAT44(uVar2,uVar1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x49a0
 */

undefined4 FUN_000049a0(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  return *param_1;
}


#define local_c (*(uint *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x49e0
 */

bool FUN_000049e0(int param_1,int param_2)

{
  unsigned char frame[64] = {0};

  ushort uVar1;

  local_c = 0;
  while( true ) {
    if (0x23 < local_c) {
      return true;
    }
    uVar1 = FUN_00004a70((undefined2 *)(param_1 + 0x38 + local_c * 2));
    if (*(char *)(param_2 + local_c) == '\0') break;
    if (uVar1 != *(byte *)(param_2 + local_c)) {
      return false;
    }
    local_c = local_c + 1;
  }
  return uVar1 == 0;
}

#undef local_c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x4a70
 */

undefined2 FUN_00004a70(undefined2 *param_1)

{
  unsigned char frame[64] = {0};

  return *param_1;
}


#undef DAT_00009c08
#define DAT_00009c08 (*(uint *)(((uintptr_t)efi_state + 0x2c08U)))
#undef DAT_00009c0c
#define DAT_00009c0c (*(uint *)(((uintptr_t)efi_state + 0x2c0cU)))
#define local_14 (*(undefined4 *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x4a90
 */

undefined4 FUN_00004a90(int param_1,uint param_2,uint param_3,undefined4 param_4)

{
  unsigned char frame[68] = {0};


  if (~DAT_00009c0c < param_3 || ~DAT_00009c0c - param_3 < (uint)(~DAT_00009c08 < param_2)) {
    local_14 = 0x80000001;
  }
  else {
    local_14 = FUN_00004840(param_1,DAT_00009c08 + param_2,
                            DAT_00009c0c + param_3 + (uint)CARRY4(DAT_00009c08,param_2),param_4);
  }
  return local_14;
}

#undef DAT_00009c08
#undef DAT_00009c0c
#undef local_14

#define local_6 (*(bool *)(frame + 26))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x4b20
 */

bool FUN_00004b20(undefined4 *param_1,uint *param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;
  uint uVar2;

  if (((param_1 == (undefined4 *)0x0) || (param_2 == (uint *)0x0)) ||
     (iVar1 = FUN_000049a0(param_1), iVar1 != 1)) {
    return false;
  }
  uVar2 = FUN_000049a0(param_1 + 1);
  *param_2 = uVar2;
  uVar2 = FUN_000049a0(param_1 + 2);
  param_2[1] = uVar2;
  uVar2 = FUN_000049a0(param_1 + 3);
  param_2[2] = uVar2;
  local_6 = false;
  if (0x41 < *param_2) {
    local_6 = param_2[1] != 0;
  }
  return local_6;
}

#undef local_6

#undef DAT_000095ac
#define DAT_000095ac (*(int *)(((uintptr_t)efi_state + 0x25acU)))
#undef DAT_02000000
#define DAT_02000000 (*(uint8_t *)(0x2000000U))
#undef DAT_02000010
#define DAT_02000010 (*(uint8_t *)(0x2000010U))
#undef _DAT_02000000
#define _DAT_02000000 (*(int *)(0x2000000U))
#undef _DAT_02000010
#define _DAT_02000010 (*(uint32_t *)(0x2000010U))
#define local_fc (*(uint *)(frame + 136))
#define iStack_174 (*(int *)(frame + 16))
#define local_f8 (*(uint *)(frame + 140))
#define local_f4 (*(uint *)(frame + 144))
#define uStack_16c (*(uint *)(frame + 24))
#define uStack_150 (*(uint *)(frame + 52))
#define iStack_148 (*(int *)(frame + 60))
#define local_e8 (*(int *)(frame + 156))
#define local_e4 (*(int *)(frame + 160))
#define uStack_138 (*(uint *)(frame + 76))
#define iStack_134 (*(int *)(frame + 80))
#define local_e0 (*(byte * *)(frame + 164))
#define local_dc (*(undefined4 *)(frame + 168))
#define uStack_130 (*(uint *)(frame + 84))
#define local_d8 (*(byte * *)(frame + 172))
#define uStack_12c (*(uint *)(frame + 88))
#define local_d4 (*(byte * *)(frame + 176))
#define uStack_128 (*(uint *)(frame + 92))
#define iStack_124 (*(int *)(frame + 96))
#define local_d0 (*(uint *)(frame + 180))
#define local_4c (*(uint *)(frame + 312))
#define local_48 (*(uint *)(frame + 316))
#define local_40 (*(undefined4 (*)[10])(frame + 324))
#define local_18 (*(int *)(frame + 364))
#define auStack_cc (*(uint (*)[32])(frame + 184))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x4bc0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00004bc0(int param_1,uint *param_2,undefined4 param_3,uint *param_4)

{
  unsigned char frame[420] = {0};

  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  int extraout_EDX = 0;
  uint extraout_EDX_00 = 0;

  local_d0 = 0;
  local_d4 = (byte *)0x0;
  local_d8 = (byte *)0x0;
  local_dc = 0;
  local_e0 = (byte *)0x1ffffff;
  local_e4 = 0;
  local_e8 = 0x2000000;
  local_f8 = 0x2000000;
  local_fc = 0;
  if (((param_4 == (uint *)0x0) || (DAT_000095ac == 0)) || (*(int *)(DAT_000095ac + 0x20) == 0)) {
    local_18 = -0x7fffffff;
  }
  else {
    *param_4 = 0;
    local_18 = FUN_00005630(param_1,*param_2,local_40);
    if (local_18 < 0) {
      FUN_00001ad0((uintptr_t)(efi_state+0x153e));
    }
    else {
      local_18 = FUN_00005830(param_1,*param_2,(int)local_40,"Permafrost",&local_4c);
      if (local_18 < 0) {
        FUN_00001ad0((uintptr_t)(efi_state+0x1582));
      }
      else {
        uVar2 = local_48 + 0xfff >> 0xc;
        if (uVar2 == 0) {
          FUN_00001ad0((uintptr_t)(efi_state+0x15c0));
          local_18 = -0x7fffffff;
        }
        else {
          local_18 = (**(code **)(DAT_000095ac + 0x20))(1,2,uVar2,&local_e0);
          if (local_18 < 0) {
            FUN_00001ad0((uintptr_t)(efi_state+0x15f4));
          }
          else {
            local_d4 = local_e0;
            FUN_00004090((int)local_e0,uVar2 << 0xc);
            local_18 = FUN_00005a40(param_1,*param_2,(int)local_40,&local_4c,(int)local_d4);
            if (local_18 < 0) {
              FUN_00001ad0((uintptr_t)(efi_state+0x1648));
            }
            else {
              local_d8 = local_d4;
              local_f4 = local_48;
              if ((7 < local_48) &&
                 ((uVar2 = FUN_00005d90(local_d4), uVar2 == 0xcafebabe || (uVar2 == 0xcafebabf)))) {
                uVar3 = FUN_00005d90(local_d4 + 4);
                uVar4 = 0x14;
                if (uVar2 == 0xcafebabf) {
                  uVar4 = 0x20;
                }
                iStack_124 = 0;
                uStack_128 = 0;
                uStack_12c = 0;
                uStack_130 = 0;
                iStack_134 = 8;
                if (((uVar3 == 0) || (0x40 < uVar3)) ||
                   (lVar1 = (ulonglong)uVar3 * (ulonglong)uVar4 + 8,
                   iVar9 = (int)((ulonglong)lVar1 >> 0x20),
                   iVar9 != 0 || (uint)-iVar9 < (uint)(local_48 < (uint)lVar1))) {
                  FUN_00001ad0((uintptr_t)(efi_state+0x1682));
                  return -0x7fffffff;
                }
                for (uStack_138 = 0; uStack_138 < uVar3; uStack_138 = uStack_138 + 1) {
                  pbVar5 = local_d4 + iStack_134;
                  uVar6 = FUN_00005d90(pbVar5);
                  if (uVar6 == 7) {
                    if (uVar2 == 0xcafebabf) {
                      uStack_128 = FUN_00005dd0(pbVar5 + 8);
                      uStack_130 = FUN_00005dd0(pbVar5 + 0x10);
                      uStack_12c = extraout_EDX_00;
                      iStack_124 = extraout_EDX;
                    }
                    else {
                      uStack_128 = FUN_00005d90(pbVar5 + 8);
                      iStack_124 = 0;
                      uStack_130 = FUN_00005d90(pbVar5 + 0xc);
                      uStack_12c = 0;
                    }
                    break;
                  }
                  iStack_134 = uVar4 + iStack_134;
                }
                if ((((uStack_130 == 0 && uStack_12c == 0) ||
                     (iStack_124 != 0 || (uint)-iStack_124 < (uint)(local_48 < uStack_128))) ||
                    (uVar2 = -(uint)(local_48 < uStack_128) - iStack_124,
                    uVar2 < uStack_12c ||
                    uVar2 - uStack_12c < (uint)(local_48 - uStack_128 < uStack_130))) ||
                   (uStack_12c != 0)) {
                  FUN_00001ad0((uintptr_t)(efi_state+0x16cc));
                  return -0x7fffffff;
                }
                local_d8 = local_d4 + uStack_128;
                local_f4 = uStack_130;
              }
              if (((local_f4 < 0x1c) ||
                  (iVar9 = FUN_000049a0((undefined4 *)local_d8), iVar9 != -0x1120532)) ||
                 (iVar9 = FUN_000049a0((undefined4 *)(local_d8 + 4)), iVar9 != 7)) {
                FUN_00001ad0((uintptr_t)(efi_state+0x1714));
                local_18 = -0x7fffffff;
              }
              else {
                uVar2 = FUN_000049a0((undefined4 *)(local_d8 + 0x10));
                uVar3 = FUN_000049a0((undefined4 *)(local_d8 + 0x14));
                iStack_148 = 0x1c;
                if ((0x40 < uVar2) ||
                   (0xffffffe3 < uVar3 ||
                    -(uint)(0xffffffe3 < uVar3) < (uint)(local_f4 < uVar3 + 0x1c))) {
                  FUN_00001ad0((uintptr_t)(efi_state+0x1756));
                  local_18 = -0x7fffffff;
                }
                else {
                  for (uStack_150 = 0; uStack_150 < uVar2; uStack_150 = uStack_150 + 1) {
                    if (uVar3 + 0x1c < iStack_148 + 8U) {
                      FUN_00001ad0((uintptr_t)(efi_state+0x17a6));
                      return -0x7fffffff;
                    }
                    pbVar5 = local_d8 + iStack_148;
                    iVar9 = FUN_000049a0((undefined4 *)pbVar5);
                    uVar6 = FUN_000049a0((undefined4 *)(pbVar5 + 4));
                    uVar4 = local_d0;
                    if ((uVar6 < 8) || ((uVar3 + 0x1c) - iStack_148 < uVar6)) {
                      FUN_00001ad0((uintptr_t)(efi_state+0x17f0));
                      return -0x7fffffff;
                    }
                    if (iVar9 == 1) {
                      if ((uVar6 < 0x38) || (7 < local_d0)) {
                        FUN_00001ad0((uintptr_t)(efi_state+0x183e));
                        return -0x7fffffff;
                      }
                      puVar7 = auStack_cc + local_d0 * 4;
                      uVar8 = FUN_000049a0((undefined4 *)(pbVar5 + 0x18));
                      *puVar7 = uVar8;
                      uVar8 = FUN_000049a0((undefined4 *)(pbVar5 + 0x1c));
                      auStack_cc[uVar4 * 4 + 1] = uVar8;
                      uVar8 = FUN_000049a0((undefined4 *)(pbVar5 + 0x20));
                      auStack_cc[uVar4 * 4 + 2] = uVar8;
                      uVar8 = FUN_000049a0((undefined4 *)(pbVar5 + 0x24));
                      auStack_cc[uVar4 * 4 + 3] = uVar8;
                      if (((auStack_cc[uVar4 * 4 + 1] < auStack_cc[uVar4 * 4 + 3]) ||
                          (*puVar7 < 0x2000000)) || (-*puVar7 - 1 < auStack_cc[uVar4 * 4 + 1])) {
                        FUN_00001ad0((uintptr_t)(efi_state+0x1882));
                        return -0x7fffffff;
                      }
                      if (auStack_cc[uVar4 * 4 + 3] != 0) {
                        if (-auStack_cc[uVar4 * 4 + 2] - 1 < auStack_cc[uVar4 * 4 + 3]) {
                          FUN_00001ad0((uintptr_t)(efi_state+0x18d2));
                          return -0x7fffffff;
                        }
                        if (local_f4 < auStack_cc[uVar4 * 4 + 2] + auStack_cc[uVar4 * 4 + 3]) {
                          FUN_00001ad0((uintptr_t)(efi_state+0x191c));
                          return -0x7fffffff;
                        }
                      }
                      if (local_f8 < *puVar7 + auStack_cc[uVar4 * 4 + 1]) {
                        local_f8 = *puVar7 + auStack_cc[uVar4 * 4 + 1];
                      }
                      local_d0 = local_d0 + 1;
                    }
                    else if (((iVar9 == 5) || (iVar9 == 4)) &&
                            ((0x4f < uVar6 &&
                             ((iVar9 = FUN_000049a0((undefined4 *)(pbVar5 + 8)), iVar9 == 1 &&
                              (uVar4 = FUN_000049a0((undefined4 *)(pbVar5 + 0xc)), 0xf < uVar4))))))
                    {
                      local_fc = FUN_000049a0((undefined4 *)(pbVar5 + 0x38));
                    }
                    iStack_148 = uVar6 + iStack_148;
                  }
                  if (((local_d0 == 0) || (local_fc < 0x2000000)) || (local_f8 <= local_fc)) {
                    FUN_00001ad0((uintptr_t)(efi_state+0x1976));
                    local_18 = -0x7fffffff;
                  }
                  else {
                    uVar2 = local_f8 + 0xfe000fff >> 0xc;
                    iStack_174 = (**(code **)(DAT_000095ac + 0x20))(2,1,uVar2,&local_e8);
                    if ((iStack_174 < 0) || (local_e8 != 0x2000000 || local_e4 != 0)) {
                      FUN_00001ad0((uintptr_t)(efi_state+0x19b6));
                      if (-1 < iStack_174) {
                        iStack_174 = -0x7fffffff;
                      }
                      local_18 = iStack_174;
                    }
                    else {
                      FUN_00004090(0x2000000,uVar2 << 0xc);
                      for (uStack_16c = 0; uStack_16c < local_d0; uStack_16c = uStack_16c + 1) {
                        if (auStack_cc[uStack_16c * 4 + 3] != 0) {
                          FUN_00005e00(auStack_cc[uStack_16c * 4],
                                       (int)(local_d8 + auStack_cc[uStack_16c * 4 + 2]),
                                       auStack_cc[uStack_16c * 4 + 3]);
                        }
                      }
                      if (_DAT_02000000 == 0x504c4d57) {
                        _DAT_02000010 = param_3;
                      }
                      *param_4 = local_fc;
                      local_18 = 0;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return local_18;
}

#undef DAT_000095ac
#undef DAT_02000000
#undef DAT_02000010
#undef _DAT_02000000
#undef _DAT_02000010
#undef local_fc
#undef iStack_174
#undef local_f8
#undef local_f4
#undef uStack_16c
#undef uStack_150
#undef iStack_148
#undef local_e8
#undef local_e4
#undef uStack_138
#undef iStack_134
#undef local_e0
#undef local_dc
#undef uStack_130
#undef local_d8
#undef uStack_12c
#undef local_d4
#undef uStack_128
#undef iStack_124
#undef local_d0
#undef local_4c
#undef local_48
#undef local_40
#undef local_18
#undef auStack_cc

#define uStack_1f4 (*(undefined4 *)(frame + 44))
#define uStack_1f0 (*(undefined4 *)(frame + 48))
#define uStack_1ec (*(undefined4 *)(frame + 52))
#define uStack_1e8 (*(undefined4 *)(frame + 56))
#define auStack_1e4 (*(undefined4 (*)[117])(frame + 60))
#define local_210 (*(undefined4 *)(frame + 16))
#define local_10 (*(int *)(frame + 528))
#define uStack_20c (*(undefined4 *)(frame + 20))
#define uStack_208 (*(undefined4 *)(frame + 24))
#define uStack_204 (*(undefined4 *)(frame + 28))
#define uStack_200 (*(undefined4 *)(frame + 32))
#define uStack_1fc (*(undefined4 *)(frame + 36))
#define uStack_1f8 (*(undefined4 *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x5630
 */

int FUN_00005630(int param_1,uint param_2,undefined4 *param_3)

{
  unsigned char frame[576] = {0};

  int iVar1;
  undefined4 uVar2;

  if (param_3 == (undefined4 *)0x0) {
    local_10 = -0x7fffffff;
  }
  else {
    local_10 = FUN_00004a90(param_1,param_2,0,&local_210);
    if (-1 < local_10) {
      iVar1 = FUN_000049a0(&local_210);
      if ((((iVar1 == 0x53464d57) && (iVar1 = FUN_000049a0(&uStack_20c), iVar1 == 0x3233)) &&
          (iVar1 = FUN_000049a0(&uStack_208), iVar1 == 1)) &&
         (iVar1 = FUN_000049a0(&uStack_204), iVar1 == 0x200)) {
        uVar2 = FUN_000049a0(&uStack_208);
        *param_3 = uVar2;
        uVar2 = FUN_000049a0(&uStack_204);
        param_3[1] = uVar2;
        uVar2 = FUN_000049a0(&uStack_200);
        param_3[2] = uVar2;
        uVar2 = FUN_000049a0(&uStack_1fc);
        param_3[3] = uVar2;
        uVar2 = FUN_000049a0(&uStack_1f8);
        param_3[4] = uVar2;
        uVar2 = FUN_000049a0(&uStack_1f4);
        param_3[5] = uVar2;
        uVar2 = FUN_000049a0(&uStack_1f0);
        param_3[6] = uVar2;
        uVar2 = FUN_000049a0(&uStack_1ec);
        param_3[7] = uVar2;
        uVar2 = FUN_000049a0(&uStack_1e8);
        param_3[8] = uVar2;
        uVar2 = FUN_000049a0(auStack_1e4);
        param_3[9] = uVar2;
        if ((param_3[2] == 0) || (0x100 < (uint)param_3[9])) {
          return -0x7fffffff;
        }
        return 0;
      }
      local_10 = -0x7fffffff;
    }
  }
  return local_10;
}

#undef uStack_1f4
#undef uStack_1f0
#undef uStack_1ec
#undef uStack_1e8
#undef auStack_1e4
#undef local_210
#undef local_10
#undef uStack_20c
#undef uStack_208
#undef uStack_204
#undef uStack_200
#undef uStack_1fc
#undef uStack_1f8

#define auStack_120 (*(undefined4 (*)[68])(frame + 513))
#define local_311 (*(char (*)[240])(frame + 16))
#define local_221 (*(undefined1 *)(frame + 256))
#define local_220 (*(int *)(frame + 257))
#define local_21c (*(int *)(frame + 261))
#define local_218 (*(uint *)(frame + 265))
#define local_214 (*(uint *)(frame + 269))
#define local_210 (*(undefined1 (*)[240])(frame + 273))
#define local_10 (*(int *)(frame + 785))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x5830
 */

int FUN_00005830(int param_1,int param_2,int param_3,char *param_4,undefined4 *param_5)

{
  unsigned char frame[833] = {0};

  undefined3 extraout_var = 0;
  undefined4 uVar1;
  bool bVar2;

  local_214 = 0;
  if (((param_3 == 0) || (param_4 == (char *)0x0)) || (param_5 == (undefined4 *)0x0)) {
    local_10 = -0x7fffffff;
  }
  else {
    FUN_00004090((int)param_5,0xc);
    for (local_218 = 0; local_218 < *(uint *)(param_3 + 0x18); local_218 = local_218 + 1) {
      local_21c = FUN_00004a90(param_1,param_2 + *(int *)(param_3 + 0x14) + local_218,0,local_210);
      if (local_21c < 0) {
        return local_21c;
      }
      local_220 = 0;
      while( true ) {
        bVar2 = false;
        if (local_220 + 0x100U < 0x201) {
          bVar2 = local_214 < *(uint *)(param_3 + 0x24);
        }
        if (!bVar2) break;
        FUN_00005e00((int)local_311,(int)(local_210 + local_220),0xf0);
        local_221 = 0;
        bVar2 = FUN_00005e50(local_311,param_4);
        if (CONCAT31(extraout_var,bVar2) != 0) {
          uVar1 = FUN_000049a0((undefined4 *)((int)auStack_120 + local_220));
          *param_5 = uVar1;
          uVar1 = FUN_000049a0((undefined4 *)((int)auStack_120 + local_220 + 4));
          param_5[1] = uVar1;
          uVar1 = FUN_000049a0((undefined4 *)((int)auStack_120 + local_220 + 8));
          param_5[2] = uVar1;
          return 0;
        }
        local_214 = local_214 + 1;
        local_220 = local_220 + 0x100;
      }
    }
    local_10 = -0x7ffffff2;
  }
  return local_10;
}

#undef auStack_120
#undef local_311
#undef local_221
#undef local_220
#undef local_21c
#undef local_218
#undef local_214
#undef local_210
#undef local_10

#define local_230 (*(uint *)(frame + 32))
#define local_22c (*(uint *)(frame + 36))
#define local_225 (*(char *)(frame + 43))
#define local_224 (*(uint *)(frame + 44))
#define local_220 (*(undefined1 (*)[512])(frame + 48))
#define local_20 (*(int *)(frame + 560))
#define local_1c (*(uint *)(frame + 564))
#define local_18 (*(uint *)(frame + 568))
#define local_14 (*(int *)(frame + 572))
#define local_240 (*(uint *)(frame + 16))
#define local_23c (*(uint *)(frame + 20))
#define local_238 (*(uint *)(frame + 24))
#define local_234 (*(uint *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x5a40
 */

int FUN_00005a40(int param_1,int param_2,int param_3,uint *param_4,int param_5)

{
  unsigned char frame[624] = {0};

  longlong lVar1;
  int iVar2;

  local_20 = param_5;
  local_224 = 0;
  local_225 = '\0';
  if (((param_3 == 0) || (param_4 == (uint *)0x0)) || (param_5 == 0)) {
    local_14 = -0x7fffffff;
  }
  else {
    local_18 = *param_4;
    for (local_1c = param_4[1]; local_1c != 0; local_1c = local_1c - local_234) {
      local_230 = *(int *)(param_3 + 8) << 9;
      local_234 = local_1c;
      local_23c = local_18;
      local_240 = 0;
      if (((local_230 == 0) || (local_18 < 2)) ||
         (local_22c = local_230, *(int *)(param_3 + 0x20) + 2U <= local_18)) {
        return -0x7fffffff;
      }
      for (; local_230 < local_234; local_230 = local_22c + local_230) {
        iVar2 = FUN_00005f30(param_1,param_2,param_3,(int)local_220,&local_224,&local_225,local_23c,
                             &local_240);
        if (iVar2 < 0) {
          return iVar2;
        }
        if (((local_240 != local_23c + 1) || (local_240 < 2)) ||
           ((*(int *)(param_3 + 0x20) + 2U <= local_240 || (-local_230 - 1 < local_22c)))) break;
        local_23c = local_240;
      }
      if (local_230 < local_234) {
        local_234 = local_230;
      }
      local_238 = local_234 + 0x1ff >> 9;
      lVar1 = (ulonglong)(local_18 - 2) * (ulonglong)*(uint *)(param_3 + 8) +
              (ulonglong)(uint)(param_2 + *(int *)(param_3 + 0x1c));
      iVar2 = FUN_00006020(param_1,(uint)lVar1,(uint)((ulonglong)lVar1 >> 0x20),local_238,local_20);
      if (iVar2 < 0) {
        return iVar2;
      }
      if (local_1c <= local_234) break;
      iVar2 = FUN_00005f30(param_1,param_2,param_3,(int)local_220,&local_224,&local_225,local_23c,
                           &local_240);
      if ((iVar2 < 0) || (local_240 == 0xffffffff)) {
        return -0x7fffffff;
      }
      local_20 = local_234 + local_20;
      local_18 = local_240;
    }
    local_14 = 0;
  }
  return local_14;
}

#undef local_230
#undef local_22c
#undef local_225
#undef local_224
#undef local_220
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef local_240
#undef local_23c
#undef local_238
#undef local_234

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x5d90
 */

uint FUN_00005d90(byte *param_1)

{
  unsigned char frame[64] = {0};

  return (uint)*param_1 << 0x18 | (uint)param_1[1] << 0x10 | (uint)param_1[2] << 8 |
         (uint)param_1[3];
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x5dd0
 */

uint FUN_00005dd0(byte *param_1)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  FUN_00005d90(param_1);
  uVar1 = FUN_00005d90(param_1 + 4);
  return uVar1;
}


#define local_10 (*(uint *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x5e00
 */

uint FUN_00005e00(int param_1,int param_2,uint param_3)

{
  unsigned char frame[64] = {0};


  for (local_10 = 0; local_10 < param_3; local_10 = local_10 + 1) {
    *(undefined1 *)(param_1 + local_10) = *(undefined1 *)(param_2 + local_10);
  }
  return local_10;
}

#undef local_10

#define local_c (*(int *)(frame + 20))
#define local_e (*(bool *)(frame + 18))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x5e50
 */

bool FUN_00005e50(char *param_1,char *param_2)

{
  unsigned char frame[64] = {0};

  bool bVar1;

  local_c = 0;
  if (*param_1 == '/') {
    param_1 = param_1 + 1;
  }
  if (*param_2 == '/') {
    param_2 = param_2 + 1;
  }
  while( true ) {
    bVar1 = false;
    if (param_1[local_c] != '\0') {
      bVar1 = param_2[local_c] != '\0';
    }
    if (!bVar1) break;
    if (param_1[local_c] != param_2[local_c]) {
      return false;
    }
    local_c = local_c + 1;
  }
  local_e = false;
  if (param_1[local_c] == '\0') {
    local_e = param_2[local_c] == '\0';
  }
  return local_e;
}

#undef local_c
#undef local_e

#define local_10 (*(int *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x5f30
 */

int FUN_00005f30(int param_1,int param_2,int param_3,int param_4,uint *param_5,char *param_6,
            uint param_7,undefined4 *param_8)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int iVar2;
  undefined4 uVar3;

  uVar1 = (param_7 & 0x3fffffff) >> 7;
  if (((((param_8 == (undefined4 *)0x0) || (param_3 == 0)) || (param_4 == 0)) ||
      ((param_5 == (uint *)0x0 || (param_6 == (char *)0x0)))) ||
     (*(uint *)(param_3 + 0x10) <= uVar1)) {
    local_10 = -0x7fffffff;
  }
  else {
    if ((*param_6 == '\0') || (*param_5 != uVar1)) {
      iVar2 = FUN_00004a90(param_1,param_2 + *(int *)(param_3 + 0xc) + uVar1,0,param_4);
      if (iVar2 < 0) {
        return iVar2;
      }
      *param_5 = uVar1;
      *param_6 = '\x01';
    }
    uVar3 = FUN_000049a0((undefined4 *)(param_4 + (param_7 & 0x7f) * 4));
    *param_8 = uVar3;
    local_10 = 0;
  }
  return local_10;
}

#undef local_10

#undef DAT_00009c08
#define DAT_00009c08 (*(uint *)(((uintptr_t)efi_state + 0x2c08U)))
#undef DAT_00009c0c
#define DAT_00009c0c (*(uint *)(((uintptr_t)efi_state + 0x2c0cU)))
#define local_18 (*(undefined4 *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x6020
 */

undefined4 FUN_00006020(int param_1,uint param_2,uint param_3,uint param_4,undefined4 param_5)

{
  unsigned char frame[72] = {0};


  if (~DAT_00009c0c < param_3 || ~DAT_00009c0c - param_3 < (uint)(~DAT_00009c08 < param_2)) {
    local_18 = 0x80000001;
  }
  else {
    local_18 = FUN_000060d0(param_1,DAT_00009c08 + param_2,
                            DAT_00009c0c + param_3 + (uint)CARRY4(DAT_00009c08,param_2),param_4,
                            param_5);
  }
  return local_18;
}

#undef DAT_00009c08
#undef DAT_00009c0c
#undef local_18

#define local_18 (*(undefined4 *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x60d0
 */

undefined4 FUN_000060d0(int param_1,uint param_2,uint param_3,uint param_4,undefined4 param_5)

{
  unsigned char frame[72] = {0};

  uint uVar1;
  uint uVar2;

  if ((((param_1 == 0) || (*(int *)(param_1 + 8) == 0)) || (*(int *)(param_1 + 0x10) == 0)) ||
     (((*(int *)(*(int *)(param_1 + 8) + 0xc) != 0x200 || (param_4 == 0)) ||
      ((-(uint)(param_4 != 0) < param_3 ||
        -(uint)(param_4 != 0) - param_3 < (uint)(-param_4 < param_2) ||
       (uVar2 = param_3 + CARRY4(param_2,param_4) + -1 + (uint)(param_2 + param_4 != 0),
       uVar1 = *(uint *)(*(int *)(param_1 + 8) + 0x1c),
       uVar1 < uVar2 ||
       uVar1 - uVar2 < (uint)(*(uint *)(*(int *)(param_1 + 8) + 0x18) < (param_2 + param_4) - 1)))))
     )) {
    local_18 = 0x80000001;
  }
  else {
    local_18 = (**(code **)(param_1 + 0x10))
                         (param_1,**(undefined4 **)(param_1 + 8),param_2,param_3,param_4 << 9,
                          param_5);
  }
  return local_18;
}

#undef local_18

#define local_18 (*(uint * *)(frame + 16))
#define puStack_14 (*(uint * *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x61d0
 */

undefined8 FUN_000061d0(int param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5,uint *param_6)

{
  unsigned char frame[72] = {0};

  uint uVar1;
  uint *puVar2;
  uint *puVar3;

  local_18 = param_5;
  puStack_14 = param_6;
  puVar2 = param_3;
  puVar3 = param_6;
  if (((param_1 != 0) && (puVar2 = param_3, puVar3 = param_6, param_2 != (uint *)0x0)) &&
     (puVar2 = param_2, puVar3 = param_6, *param_2 < 0x100)) {
    puVar2 = (uint *)(((int)param_4 - (int)param_6) - (uint)(param_3 < param_5));
    puVar3 = (uint *)((int)param_3 - (int)param_5);
    if ((param_4 < param_6 || (uint)((int)param_4 - (int)param_6) < (uint)(param_3 < param_5)) &&
       (uVar1 = (uint)(((int)param_4 << 6 | (uint)param_3 >> 0x1a) < 0x3f),
       puVar2 = (uint *)(((uint)param_4 >> 0x1a) - uVar1), puVar3 = param_3,
       (uint)param_4 >> 0x1a < uVar1)) {
      if ((uint *)(uint)(param_5 < (uint *)0xfc000001) <= param_6) {
        puStack_14 = (uint *)0x0;
        local_18 = (uint *)0xfc000000;
      }
      *(ulonglong *)(param_1 + *param_2 * 0x10) = CONCAT44(param_4,param_3);
      *(ulonglong *)(param_1 + 8 + *param_2 * 0x10) = CONCAT44(puStack_14,local_18);
      *param_2 = *param_2 + 1;
      puVar2 = param_2;
    }
  }
  return CONCAT44(puVar3,puVar2);
}

#undef local_18
#undef puStack_14

#undef DAT_00007010
#define DAT_00007010 (*(uint8_t *)(((uintptr_t)efi_state + 0x10U)))
#undef DAT_000095ac
#define DAT_000095ac (*(int *)(((uintptr_t)efi_state + 0x25acU)))
#define iStack_24 (*(int *)(frame + 16))
#define local_10 (*(int *)(frame + 36))
#define uStack_20 (*(uint *)(frame + 20))
#define iStack_14 (*(int *)(frame + 32))
#define local_1c (*(uint *)(frame + 24))
#define local_18 (*(int *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x62b0
 */

int FUN_000062b0(undefined8 *param_1)

{
  unsigned char frame[84] = {0};

  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;

  local_18 = 0;
  local_1c = 0;
  if (param_1 == (undefined8 *)0x0) {
    local_10 = -0x7fffffff;
  }
  else {
    FUN_00004090((int)param_1,0x38);
    if (((DAT_000095ac == 0) || (*(int *)(DAT_000095ac + 0xa8) == 0)) ||
       (*(int *)(DAT_000095ac + 0x58) == 0)) {
      local_10 = -0x7fffffff;
    }
    else {
      iStack_14 = (**(code **)(DAT_000095ac + 0xa8))(2,&DAT_00007010,0,&local_1c,&local_18);
      if (iStack_14 < 0) {
        local_10 = iStack_14;
      }
      else {
        for (uStack_20 = 0; uStack_20 < local_1c; uStack_20 = uStack_20 + 1) {
          iStack_24 = 0;
          iStack_14 = (**(code **)(DAT_000095ac + 0x58))
                                (*(undefined4 *)(local_18 + uStack_20 * 4),&DAT_00007010,&iStack_24)
          ;
          if (((((-1 < iStack_14) && (iStack_24 != 0)) &&
               ((*(int *)(iStack_24 + 0xc) != 0 &&
                ((*(int *)(*(int *)(iStack_24 + 0xc) + 8) != 0 &&
                 (iVar1 = *(int *)(*(int *)(iStack_24 + 0xc) + 8), *(uint *)(iVar1 + 0xc) < 3))))))
              && (*(int *)(iVar1 + 4) != 0)) &&
             (((*(int *)(iVar1 + 8) != 0 && (*(uint *)(iVar1 + 4) <= *(uint *)(iVar1 + 0x20))) &&
              (iVar2 = *(int *)(iStack_24 + 0xc),
              uVar4 = *(int *)(iVar2 + 0x14) +
                      (uint)CARRY4(*(uint *)(iVar2 + 0x10),*(uint *)(iVar2 + 0x18)),
              uVar3 = *(uint *)(*(int *)(iStack_24 + 0xc) + 0x14),
              uVar3 <= uVar4 &&
              (uint)(*(uint *)(iVar2 + 0x10) + *(uint *)(iVar2 + 0x18) <
                    *(uint *)(*(int *)(iStack_24 + 0xc) + 0x10)) <= uVar4 - uVar3)))) {
            *param_1 = *(undefined8 *)(*(int *)(iStack_24 + 0xc) + 0x10);
            *(undefined4 *)(param_1 + 1) = *(undefined4 *)(*(int *)(iStack_24 + 0xc) + 0x18);
            *(int *)((int)param_1 + 0xc) = *(int *)(iVar1 + 0x20) << 2;
            *(undefined4 *)(param_1 + 2) = *(undefined4 *)(iVar1 + 4);
            *(undefined4 *)((int)param_1 + 0x14) = *(undefined4 *)(iVar1 + 8);
            *(undefined4 *)(param_1 + 3) = *(undefined4 *)(iVar1 + 0xc);
            FUN_00006cd0((int)param_1,iVar1);
            if (((*(int *)((int)param_1 + 0x1c) != 0) && (*(int *)(param_1 + 4) != 0)) &&
               (*(int *)((int)param_1 + 0x24) != 0)) {
              if (*(int *)(DAT_000095ac + 0x30) != 0) {
                (**(code **)(DAT_000095ac + 0x30))(local_18);
              }
              return 0;
            }
          }
        }
        if (*(int *)(DAT_000095ac + 0x30) != 0) {
          (**(code **)(DAT_000095ac + 0x30))(local_18);
        }
        local_10 = -0x7ffffff2;
      }
    }
  }
  return local_10;
}

#undef DAT_00007010
#undef DAT_000095ac
#undef iStack_24
#undef local_10
#undef uStack_20
#undef iStack_14
#undef local_1c
#undef local_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x6570
 */

undefined8 FUN_00006570(uint param_1,int param_2,uint param_3,int param_4)

{
  unsigned char frame[64] = {0};

  return CONCAT44(param_2 + param_4 + (uint)CARRY4(param_1,param_3) + -1 +
                  (uint)(param_1 + param_3 != 0) & -(uint)(param_3 != 0) - param_4,
                  (param_1 + param_3) - 1 & -param_3);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x65c0
 */

undefined8 FUN_000065c0(uint param_1,uint param_2,int param_3,int param_4)

{
  unsigned char frame[64] = {0};

  return CONCAT44(param_2 & -(uint)(param_3 != 0) - param_4,param_1 & -param_3);
}


#define local_2c (*(uint *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x6610
 */

undefined8 FUN_00006610(int param_1,uint *param_2,undefined4 param_3,undefined4 param_4,uint param_5,
            uint param_6,char param_7,undefined1 param_8)

{
  unsigned char frame[92] = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;

  uVar3 = 0x1000;
  if (param_7 != '\0') {
    uVar3 = 0x200000;
  }
  uVar4 = param_6;
  if ((param_1 != 0) && (param_2 != (uint *)0x0)) {
    bVar5 = param_5 < uVar3;
    uVar4 = param_5 - uVar3;
    uVar3 = param_6 - bVar5;
    if (bVar5 <= param_6) {
      local_2c = *param_2;
      if (*param_2 < 0x10) {
        *param_2 = *param_2 + 1;
      }
      else {
        uVar1 = (uint)(*(uint *)(param_1 + 0x170) < param_5);
        uVar2 = *(uint *)(param_1 + 0x174) - param_6;
        uVar3 = uVar2 - uVar1;
        uVar4 = *(uint *)(param_1 + 0x170) - param_5;
        if (param_6 <= *(uint *)(param_1 + 0x174) && uVar1 <= uVar2) goto LAB_000067e2;
        local_2c = 0xf;
      }
      while( true ) {
        bVar5 = false;
        if (local_2c != 0) {
          uVar3 = *(uint *)(param_1 + -0xc + local_2c * 0x18);
          bVar5 = uVar3 < param_6 ||
                  uVar3 - param_6 < (uint)(*(uint *)(param_1 + -0x10 + local_2c * 0x18) < param_5);
        }
        if (!bVar5) break;
        if (local_2c < 0x10) {
          *(undefined8 *)(param_1 + local_2c * 0x18) =
               *(undefined8 *)(param_1 + -0x18 + local_2c * 0x18);
          *(undefined8 *)(param_1 + 8 + local_2c * 0x18) =
               *(undefined8 *)(param_1 + -0x10 + local_2c * 0x18);
          *(undefined1 *)(param_1 + local_2c * 0x18 + 0x10) =
               *(undefined1 *)(param_1 + (local_2c - 1) * 0x18 + 0x10);
          *(undefined1 *)(param_1 + local_2c * 0x18 + 0x11) =
               *(undefined1 *)(param_1 + (local_2c - 1) * 0x18 + 0x11);
        }
        local_2c = local_2c - 1;
      }
      *(ulonglong *)(param_1 + local_2c * 0x18) = CONCAT44(param_4,param_3);
      *(ulonglong *)(param_1 + 8 + local_2c * 0x18) = CONCAT44(param_6,param_5);
      *(char *)(param_1 + local_2c * 0x18 + 0x10) = param_7;
      uVar3 = param_1 + local_2c * 0x18;
      *(undefined1 *)(uVar3 + 0x11) = param_8;
      uVar4 = local_2c * 0x18;
    }
  }
LAB_000067e2:
  return CONCAT44(uVar4,uVar3);
}

#undef local_2c

#define local_40 (*(undefined8 *)(frame + 16))
#define local_38 (*(undefined8 *)(frame + 24))
#define local_30 (*(uint *)(frame + 32))
#define local_28 (*(undefined8 *)(frame + 40))
#define local_20 (*(undefined8 *)(frame + 48))
#define local_d (*(undefined1 *)(frame + 67))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x67f0
 */

undefined8 FUN_000067f0(uint param_1,uint param_2,uint param_3,undefined8 *param_4,undefined8 *param_5,
            undefined8 *param_6)

{
  unsigned char frame[112] = {0};

  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;

  if ((param_5 == (undefined8 *)0x0) || (param_6 == (undefined8 *)0x0)) {
    local_d = 0;
    puVar4 = param_4;
  }
  else {
    uVar1 = *param_5;
    PF_PART4(local_20, 0) = (uint)uVar1;
    PF_PART4(local_20, 4) = (undefined8 *)((ulonglong)uVar1 >> 0x20);
    bVar5 = (uint)local_20 < param_3;
    bVar6 = PF_PART4(local_20, 4) < param_4;
    uVar3 = (int)PF_PART4(local_20, 4) - (int)param_4;
    local_20 = uVar1;
    if (bVar6 || uVar3 < bVar5) {
      local_20 = CONCAT44(param_4,param_3);
    }
    local_20 = FUN_00006570((uint)local_20,(int)PF_PART4(local_20, 4),0x200000,0);
    do {
      local_28 = 0xfc000000;
      bVar5 = false;
      uVar3 = (uint)(((int)PF_PART4(local_20, 4) << 6 | (uint)local_20 >> 0x1a) < 0x3f);
      puVar4 = (undefined8 *)(((uint)PF_PART4(local_20, 4) >> 0x1a) - uVar3);
      if (uVar3 <= (uint)PF_PART4(local_20, 4) >> 0x1a) {
        local_d = 0;
        param_1 = (uint)local_20;
        goto LAB_00006ab1;
      }
      local_30 = 0;
      while( true ) {
        if (param_2 <= local_30) break;
        uVar1 = *(undefined8 *)(param_1 + local_30 * 0x10);
        uVar2 = *(undefined8 *)(param_1 + 8 + local_30 * 0x10);
        PF_PART4(local_40, 0) = (uint)uVar2;
        PF_PART4(local_40, 4) = (undefined8 *)((ulonglong)uVar2 >> 0x20);
        PF_PART4(local_38, 0) = (uint)uVar1;
        PF_PART4(local_38, 4) = (undefined8 *)((ulonglong)uVar1 >> 0x20);
        if (((PF_PART4(local_38, 4) < PF_PART4(local_40, 4) ||
              (uint)((int)PF_PART4(local_38, 4) - (int)PF_PART4(local_40, 4)) <
              (uint)((uint)local_38 < (uint)local_40)) &&
            (param_4 < PF_PART4(local_40, 4) ||
             (uint)((int)param_4 - (int)PF_PART4(local_40, 4)) < (uint)(param_3 < (uint)local_40))) &&
           ((uint)PF_PART4(local_38, 4) >> 0x1a <
            (uint)(((int)PF_PART4(local_38, 4) << 6 | (uint)local_38 >> 0x1a) < 0x3f))) {
          bVar6 = (uint)local_38 < param_3;
          bVar7 = PF_PART4(local_38, 4) < param_4;
          uVar3 = (int)PF_PART4(local_38, 4) - (int)param_4;
          local_38 = uVar1;
          if (bVar7 || uVar3 < bVar6) {
            local_38 = CONCAT44(param_4,param_3);
          }
          bVar6 = (undefined8 *)(uint)((uint)local_40 < 0xfc000001) <= PF_PART4(local_40, 4);
          local_40 = uVar2;
          if (bVar6) {
            local_40 = 0xfc000000;
          }
          if ((PF_PART4(local_20, 4) < PF_PART4(local_40, 4) ||
               (uint)((int)PF_PART4(local_20, 4) - (int)PF_PART4(local_40, 4)) <
               (uint)((uint)local_20 < (uint)local_40)) &&
             (PF_PART4(local_38, 4) <= PF_PART4(local_20, 4) &&
              (uint)((uint)local_20 < (uint)local_38) <=
              (uint)((int)PF_PART4(local_20, 4) - (int)PF_PART4(local_38, 4)))) {
            local_20 = FUN_00006570((uint)local_40,(int)PF_PART4(local_40, 4),0x200000,0);
            bVar5 = true;
            break;
          }
          if ((PF_PART4(local_20, 4) < PF_PART4(local_40, 4) ||
               (uint)((int)PF_PART4(local_20, 4) - (int)PF_PART4(local_40, 4)) <
               (uint)((uint)local_20 < (uint)local_40)) &&
             (PF_PART4(local_38, 4) < PF_PART4(local_28, 4) ||
              (int)PF_PART4(local_38, 4) - PF_PART4(local_28, 4) < (uint)((uint)local_38 < (uint)local_28))) {
            local_28 = FUN_000065c0((uint)local_38,(uint)PF_PART4(local_38, 4),0x200000,0);
          }
        }
        local_30 = local_30 + 1;
      }
    } while (bVar5);
    param_1 = (uint)local_20 - (uint)local_28;
    puVar4 = (undefined8 *)
             (((int)PF_PART4(local_20, 4) - PF_PART4(local_28, 4)) - (uint)((uint)local_20 < (uint)local_28));
    if (PF_PART4(local_20, 4) < PF_PART4(local_28, 4) ||
        (int)PF_PART4(local_20, 4) - PF_PART4(local_28, 4) < (uint)((uint)local_20 < (uint)local_28)) {
      *param_5 = local_20;
      *param_6 = local_28;
      local_d = 1;
      puVar4 = param_6;
    }
    else {
      local_d = 0;
    }
  }
LAB_00006ab1:
  return CONCAT44(param_1,CONCAT31((int3)((uint)puVar4 >> 8),local_d));
}

#undef local_40
#undef local_38
#undef local_30
#undef local_28
#undef local_20
#undef local_d

#undef DAT_000095ac
#define DAT_000095ac (*(int *)(((uintptr_t)efi_state + 0x25acU)))
#define iStack_3c (*(int *)(frame + 16))
#define iStack_24 (*(int *)(frame + 40))
#define iStack_1c (*(int *)(frame + 48))
#define local_28 (*(uint *)(frame + 36))
#define local_20 (*(uint *)(frame + 44))
#define local_18 (*(uint *)(frame + 52))
#define local_14 (*(uint *)(frame + 56))
#define local_10 (*(int *)(frame + 60))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x6ac0
 */

int FUN_00006ac0(uint param_1,int param_2,uint param_3,uint param_4)

{
  unsigned char frame[108] = {0};

  uint uVar1;

  local_18 = param_3;
  local_14 = param_4;
  iStack_1c = param_2;
  local_28 = param_1;
  iStack_24 = param_2;
  if ((((DAT_000095ac == 0) || (*(int *)(DAT_000095ac + 0x20) == 0)) ||
      (param_3 == 0 && param_4 == 0)) || (((param_1 & 0xfff) != 0 || ((param_3 & 0xfff) != 0)))) {
    local_10 = -0x7fffffff;
  }
  else {
    uVar1 = param_4 << 0x14 | param_3 >> 0xc;
    if ((uVar1 == 0 && param_4 >> 0xc == 0) || (param_4 >> 0xc != 0)) {
      local_10 = -0x7ffffff7;
    }
    else {
      local_20 = param_1;
      iStack_3c = (**(code **)(DAT_000095ac + 0x20))(2,2,uVar1,&local_28);
      if ((iStack_3c < 0) || (local_28 != local_20 || iStack_24 != iStack_1c)) {
        if (-1 < iStack_3c) {
          iStack_3c = -0x7fffffff;
        }
        local_10 = iStack_3c;
      }
      else {
        local_10 = 0;
      }
    }
  }
  return local_10;
}

#undef DAT_000095ac
#undef iStack_3c
#undef iStack_24
#undef iStack_1c
#undef local_28
#undef local_20
#undef local_18
#undef local_14
#undef local_10

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x6c30
 */

bool FUN_00006c30(undefined4 param_1,int param_2)

{
  unsigned char frame[64] = {0};

  return param_2 != 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x6c60
 */

/* WARNING: Variable defined which should be unmapped: param_1 */

uint * FUN_00006c60(uint *param_1,uint param_2,uint param_3)

{
  unsigned char frame[64] = {0};

  if (((param_1 != (uint *)0x0) && (param_3 != 0)) && (*param_1 < 0x10)) {
    param_1[*param_1 + 1] = param_2;
    param_1[*param_1 + 0x11] = param_3;
    FUN_00006e90((int)param_1,param_3);
    *param_1 = *param_1 + 1;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x6cd0
 */

uint FUN_00006cd0(int param_1,int param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  uVar1 = param_1;
  if (*(int *)(param_2 + 0xc) == 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0xff;
    *(undefined4 *)(param_1 + 0x20) = 0xff00;
    *(undefined4 *)(param_1 + 0x24) = 0xff0000;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 8;
    *(undefined4 *)(param_1 + 0x30) = 0x10;
  }
  else if (*(int *)(param_2 + 0xc) == 1) {
    *(undefined4 *)(param_1 + 0x1c) = 0xff0000;
    *(undefined4 *)(param_1 + 0x20) = 0xff00;
    *(undefined4 *)(param_1 + 0x24) = 0xff;
    *(undefined4 *)(param_1 + 0x28) = 0x10;
    *(undefined4 *)(param_1 + 0x2c) = 8;
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  else {
    uVar1 = param_2;
    if (*(int *)(param_2 + 0xc) == 2) {
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x10);
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x14);
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x18);
      uVar1 = FUN_00006e20(*(uint *)(param_1 + 0x1c));
      *(uint *)(param_1 + 0x28) = uVar1;
      uVar1 = FUN_00006e20(*(uint *)(param_1 + 0x20));
      *(uint *)(param_1 + 0x2c) = uVar1;
      uVar1 = FUN_00006e20(*(uint *)(param_1 + 0x24));
      *(uint *)(param_1 + 0x30) = uVar1;
      uVar1 = param_1;
    }
  }
  return uVar1;
}


#define local_c (*(uint *)(frame + 20))
#define local_8 (*(uint *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x6e20
 */

uint FUN_00006e20(uint param_1)

{
  unsigned char frame[64] = {0};


  local_c = 0;
  if (param_1 == 0) {
    local_8 = 0;
  }
  else {
    for (; (param_1 & 1) == 0 && local_c < 0x1f; param_1 = param_1 >> 1) {
      local_c = local_c + 1;
    }
    local_8 = local_c;
  }
  return local_8;
}

#undef local_c
#undef local_8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x6e90
 */

/* WARNING: Variable defined which should be unmapped: param_1 */

int FUN_00006e90(int param_1,int param_2)

{
  unsigned char frame[64] = {0};

  if ((param_1 != 0) && (param_2 != 0)) {
    if (-param_2 - 1U < *(uint *)(param_1 + 0x84)) {
      *(undefined4 *)(param_1 + 0x84) = 0xffffffff;
    }
    else {
      *(int *)(param_1 + 0x84) = param_2 + *(int *)(param_1 + 0x84);
    }
  }
  return param_1;
}


uint FUN_00006ee0(void) { uintptr_t value; __asm__ volatile("mov %%cr0,%0":"=r"(value)); return value; }


uint FUN_00006f00(uint value) { __asm__ volatile("mov %0,%%cr0"::"r"(value):"memory"); return value; }

