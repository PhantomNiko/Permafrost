/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000
 */

ulonglong FUN_00001000(longlong param_1)

{
  ulonglong uVar1;
  ulonglong local_8;
  
  uVar1 = FUN_00001070(param_1);
  if ((char)uVar1 == '\0') {
    local_8 = 0;
  }
  else {
    local_8 = FUN_000010c0(param_1);
    if (-1 < (longlong)local_8) {
      __asm__ volatile("mov %0,%%cr3"::"r"((uintptr_t)0x2f7000):"memory");
      local_8 = 0;
    }
  }
  return local_8;
}



#define local_1 (*(undefined1 *)(frame + 31))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1070
 */

ulonglong FUN_00001070(longlong param_1)

{
  unsigned char frame[64] = {0};

  longlong in_RAX;

  if (param_1 == 0) {
    local_1 = 0;
    param_1 = in_RAX;
  }
  else if (*(int *)(param_1 + 0x498) == 0) {
    if (*(int *)(param_1 + 0x88) == 0) {
      local_1 = 0;
    }
    else {
      local_1 = 1;
    }
  }
  else {
    local_1 = 1;
  }
  return CONCAT71((int7)((ulonglong)param_1 >> 8),local_1);
}

#undef local_1

#define local_28 (*(ulonglong *)(frame + 64))
#define local_18 (*(uint *)(frame + 80))
#define local_8 (*(ulonglong *)(frame + 96))
#define local_58 (*(ulonglong *)(frame + 16))
#define local_34 (*(uint *)(frame + 52))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10c0
 */

ulonglong FUN_000010c0(longlong param_1)

{
  unsigned char frame[136] = {0};

  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;

  uVar5 = FUN_00001070(param_1);
  if ((char)uVar5 == '\0') {
    local_8 = 0;
  }
  else {
    FUN_00004b30(0x2f7000,0x9000);
    FUN_00004b80(0x2f7000,0,0x2f8003,0);
    for (local_18 = 0; local_18 < 7; local_18 = local_18 + 1) {
      uVar4 = local_18 * 0x1000 + 0x2f9000;
      FUN_00004b80(0x2f8000,local_18,uVar4 | 3,0);
      for (local_28 = 0; local_28 < 0x200; local_28 = local_28 + 1) {
        lVar6 = (ulonglong)local_18 * 0x40000000 + local_28 * 0x200000;
        FUN_00004b80(uVar4,(int)local_28,(uint)lVar6 | 0x83,(int)((ulonglong)lVar6 >> 0x20));
      }
    }
    for (local_34 = 0; local_34 < *(uint *)(param_1 + 0x498) && local_34 < 0x10;
        local_34 = local_34 + 1) {
      uVar4 = *(uint *)(param_1 + 0x49c + (ulonglong)local_34 * 4);
      uVar1 = *(undefined4 *)(param_1 + 0x55c + (ulonglong)local_34 * 4);
      uVar2 = *(undefined4 *)(param_1 + 0x51c + (ulonglong)local_34 * 4);
      uVar3 = *(uint *)(param_1 + 0x4dc + (ulonglong)local_34 * 4);
      for (local_58 = 0; local_58 < uVar3; local_58 = local_58 + 0x200000) {
        FUN_00004bd0(uVar4 + local_58,CONCAT44(uVar1,uVar2) + local_58,0x83);
      }
    }
    local_8 = FUN_00004c60(param_1);
  }
  return local_8;
}

#undef local_28
#undef local_18
#undef local_8
#undef local_58
#undef local_34

#undef DAT_0000a2ba
#define DAT_0000a2ba (*(uint8_t *)(((uintptr_t)efi_state + 0x12baU)))
#undef DAT_0000b000
#define DAT_0000b000 (*(uint8_t *)(((uintptr_t)efi_state + 0x2000U)))
#undef DAT_0000b5a8
#define DAT_0000b5a8 (*(uint64_t *)(((uintptr_t)efi_state + 0x25a8U)))
#undef DAT_0000b5b0
#define DAT_0000b5b0 (*(uint64_t *)(((uintptr_t)efi_state + 0x25b0U)))
#undef DAT_0000b5b8
#define DAT_0000b5b8 (*(uint64_t * *)(((uintptr_t)efi_state + 0x25b8U)))
#undef DAT_0000b5c0
#define DAT_0000b5c0 (*(uint64_t * *)(((uintptr_t)efi_state + 0x25c0U)))
#undef DAT_0000b5c8
#define DAT_0000b5c8 (*(uint64_t *)(((uintptr_t)efi_state + 0x25c8U)))
#undef DAT_0000b5d0
#define DAT_0000b5d0 (*(uint32_t *)(((uintptr_t)efi_state + 0x25d0U)))
#undef DAT_0000b5d8
#define DAT_0000b5d8 (*(uint64_t *)(((uintptr_t)efi_state + 0x25d8U)))
#undef DAT_0000b5e0
#define DAT_0000b5e0 (*(uint8_t *)(((uintptr_t)efi_state + 0x25e0U)))
#undef DAT_0000b5e8
#define DAT_0000b5e8 (*(uint8_t *)(((uintptr_t)efi_state + 0x25e8U)))
#undef _DAT_0000b5e0
#define _DAT_0000b5e0 (*(uint64_t *)(((uintptr_t)efi_state + 0x25e0U)))
#undef _DAT_0000b5e8
#define _DAT_0000b5e8 (*(uint64_t *)(((uintptr_t)efi_state + 0x25e8U)))
#define local_d0 (*(ulonglong *)(frame + 16))
#define local_ac (*(undefined4 *)(frame + 52))
#define local_a8 (*(ulonglong *)(frame + 56))
#define local_8c (*(int *)(frame + 84))
#define local_88 (*(uint *)(frame + 88))
#define local_84 (*(uint (*)[5])(frame + 92))
#define local_70 (*(ulonglong *)(frame + 112))
#define local_68 (*(ulonglong *)(frame + 120))
#define local_60 (*(ulonglong *)(frame + 128))
#define local_55 (*(char *)(frame + 139))
#define local_54 (*(undefined8 *)(frame + 140))
#define local_48 (*(uint (*)[3])(frame + 152))
#define local_3c (*(uint (*)[3])(frame + 164))
#define local_30 (*(longlong *)(frame + 176))
#define local_28 (*(ulonglong *)(frame + 184))
#define local_20 (*(ulonglong *)(frame + 192))
#define local_18 (*(ulonglong *)(frame + 200))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x12f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_000012f0(ulonglong image_handle,ulonglong system_table)

{
  unsigned char frame[256] = {0};

  ulonglong uVar1;

  local_30 = 0;
  local_55 = '\0';
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_84[4] = 0;
  local_84[3] = 0;
  local_84[2] = 0;
  local_84[1] = 0;
  local_84[0] = 0;
  local_88 = 0;
  local_8c = 0;
  if (system_table == 0) {
    local_18 = 0x8000000000000001;
  }
  else {
    DAT_0000b5b0 = *(undefined8 *)(system_table + 0x60);
    DAT_0000b5b8 = *(longlong **)(system_table + 0x40);
    DAT_0000b5c0 = *(longlong **)(system_table + 0x30);
    DAT_0000b5a8 = system_table;
    local_28 = image_handle;
    local_20 = system_table;
    FUN_00001b30();
    if (DAT_0000b5b8 == (longlong *)0x0) {
      local_18 = 0x8000000000000001;
    }
    else {
      FUN_00001b70();
      uVar1 = FUN_00001ba0();
      if ((longlong)uVar1 < 0) {
        FUN_00001bd0(L"Permafrost application region reservation failed: 0x");
        FUN_00001c10(uVar1);
        FUN_00001bd0(&DAT_0000a2ba);
        local_18 = uVar1;
      }
      else {
        uVar1 = FUN_00001c80(local_84 + 4,local_84 + 3);
        if ((longlong)uVar1 < 0) {
          FUN_00001bd0(L"Permafrost EFI I/O buffer allocation failed: 0x");
          FUN_00001c10(uVar1);
          FUN_00001bd0(&DAT_0000a2ba);
          local_18 = uVar1;
        }
        else {
          if (*DAT_0000b5b8 != 0) {
            (*(code *)*DAT_0000b5b8)(DAT_0000b5b8,0);
          }
          if ((DAT_0000b5c0 != (longlong *)0x0) && (*DAT_0000b5c0 != 0)) {
            (*(code *)*DAT_0000b5c0)(DAT_0000b5c0,0);
          }
          FUN_00001d40();
          if (DAT_0000b5b8[5] != 0) {
            (*(code *)DAT_0000b5b8[5])(DAT_0000b5b8,7);
          }
          if (DAT_0000b5b8[6] != 0) {
            (*(code *)DAT_0000b5b8[6])(DAT_0000b5b8);
          }
          FUN_00001bd0(L"Permafrost\r\n");
          FUN_00001bd0(L"Starting platform abstraction layer.\r\n");
          uVar1 = FUN_00001ee0(&local_30,&local_60);
          if ((longlong)uVar1 < 0) {
            FUN_00001bd0(L"Permafrost WSHM device was not found: 0x");
            FUN_00001c10(uVar1);
            FUN_00001bd0(&DAT_0000a2ba);
            local_18 = uVar1;
          }
          else {
            uVar1 = FUN_00002260(local_30,local_3c,local_48,&local_55);
            if ((longlong)uVar1 < 0) {
              FUN_00001bd0(L"Permafrost WBPT boot partitions failed: 0x");
              FUN_00001c10(uVar1);
              FUN_00001bd0(&DAT_0000a2ba);
              local_18 = uVar1;
            }
            else {
              FUN_00001bd0(L"Permafrost storage device: ");
              FUN_00002420(local_60);
              FUN_00001bd0(L" sectors\r\n");
              FUN_00001bd0(L"Permafrost primary OS volume: LBA ");
              FUN_00002420((ulonglong)local_3c[0]);
              FUN_00001bd0(&DAT_0000a2ba);
              if (local_55 != '\0') {
                FUN_00001bd0(L"Permafrost recovery OS volume: LBA ");
                FUN_00002420((ulonglong)local_48[0]);
                FUN_00001bd0(&DAT_0000a2ba);
              }
              if ((local_30 == 0) || (*(longlong *)(local_30 + 8) == 0)) {
                local_a8 = local_60;
              }
              else {
                local_a8 = *(longlong *)(*(longlong *)(local_30 + 8) + 0x18) + 1;
              }
              local_68 = local_a8;
              local_70 = FUN_00002500();
              uVar1 = FUN_00002620(local_84);
              if ((longlong)uVar1 < 0) {
                FUN_00001bd0(L"PAL context allocation failed: 0x");
                FUN_00001c10(uVar1);
                FUN_00001bd0(&DAT_0000a2ba);
                local_18 = uVar1;
              }
              else {
                uVar1 = FUN_00002640(local_30,local_3c,local_48,local_55,local_84[0],local_84 + 2,
                                     &local_54);
                if ((longlong)uVar1 < 0) {
                  FUN_00001bd0(L"Permafrost payload load failed: 0x");
                  FUN_00001c10(uVar1);
                  FUN_00001bd0(&DAT_0000a2ba);
                  local_18 = uVar1;
                }
                else {
                  DAT_0000b5c8 = local_30;
                  if ((local_30 == 0) || (*(longlong *)(local_30 + 8) == 0)) {
                    local_ac = 0;
                  }
                  else {
                    local_ac = **(undefined4 **)(local_30 + 8);
                  }
                  DAT_0000b5d0 = local_ac;
                  uVar1 = FUN_000027e0(&local_88,&local_8c);
                  if ((longlong)uVar1 < 0) {
                    FUN_00001bd0(L"Permafrost firmware thunk allocation failed: 0x");
                    FUN_00001c10(uVar1);
                    FUN_00001bd0(&DAT_0000a2ba);
                    local_18 = uVar1;
                  }
                  else {
                    uVar1 = FUN_00002e70(0,0x10000,local_84 + 1);
                    if ((longlong)uVar1 < 0) {
                      FUN_00001bd0(L"Permafrost handoff stack allocation failed: 0x");
                      FUN_00001c10(uVar1);
                      FUN_00001bd0(&DAT_0000a2ba);
                      local_18 = uVar1;
                    }
                    else {
                      uVar1 = FUN_00002ea0((uint *)&DAT_0000b000);
                      if ((longlong)uVar1 < 0) {
                        FUN_00001bd0(L"Permafrost heap allocation failed: 0x");
                        FUN_00001c10(uVar1);
                        FUN_00001bd0(&DAT_0000a2ba);
                        local_18 = uVar1;
                      }
                      else {
                        if (DAT_0000b5d8 == 0) {
                          local_d0 = 0;
                        }
                        else {
                          local_d0 = local_68;
                        }
                        FUN_00003fe0(local_30,(undefined4 *)&local_54,local_60,local_d0,
                                     (int *)&DAT_0000b000,local_70,local_84[4],local_84[3],
                                     (undefined4 *)(ulonglong)local_84[0]);
                        *(uint *)((ulonglong)local_84[0] + 0x114) = local_88;
                        *(int *)((ulonglong)local_84[0] + 0x118) = local_8c;
                        FUN_00004a50(local_84[0]);
                        FUN_00001bd0(L"Handing off to 64-bit Permafrost.\r\n");
                        _DAT_0000b5e0 = FUN_00004a80();
                        uVar1 = FUN_00001000((uintptr_t)(efi_state+0x2000));
                        if ((longlong)uVar1 < 0) {
                          FUN_00001bd0(L"Permafrost page table activation failed: 0x");
                          FUN_00001c10(uVar1);
                          FUN_00001bd0(&DAT_0000a2ba);
                          local_18 = uVar1;
                        }
                        else {
                          _DAT_0000b5e8 = FUN_00004a80();
                          FUN_00004aa0();
                          FUN_00004af0(local_84[2]);
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
    }
  }
  return local_18;
}

#undef DAT_0000a2ba
#undef DAT_0000b000
#undef DAT_0000b5a8
#undef DAT_0000b5b0
#undef DAT_0000b5b8
#undef DAT_0000b5c0
#undef DAT_0000b5c8
#undef DAT_0000b5d0
#undef DAT_0000b5d8
#undef DAT_0000b5e0
#undef DAT_0000b5e8
#undef _DAT_0000b5e0
#undef _DAT_0000b5e8
#undef local_d0
#undef local_ac
#undef local_a8
#undef local_8c
#undef local_88
#undef local_84
#undef local_70
#undef local_68
#undef local_60
#undef local_55
#undef local_54
#undef local_48
#undef local_3c
#undef local_30
#undef local_28
#undef local_20
#undef local_18

#undef DAT_0000b5b0
#define DAT_0000b5b0 (*(uint64_t *)(((uintptr_t)efi_state + 0x25b0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1b30
 */

ulonglong FUN_00001b30(void)

{
  unsigned char frame[64] = {0};

  ulonglong in_RAX;

  if ((DAT_0000b5b0 != 0) && (in_RAX = DAT_0000b5b0, *(longlong *)(DAT_0000b5b0 + 0x100) != 0)) {
    in_RAX = (**(code **)(DAT_0000b5b0 + 0x100))(0,0,0);
  }
  return in_RAX;
}

#undef DAT_0000b5b0

#define local_4 (*(undefined4 *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1b70
 */

ulonglong FUN_00001b70(void)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;

  local_4 = 0;
  uVar1 = FUN_000058d0(0x6000,0x1000,2,&local_4);
  return uVar1;
}

#undef local_4

#define local_4 (*(undefined4 *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1ba0
 */

ulonglong FUN_00001ba0(void)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;

  local_4 = 0;
  uVar1 = FUN_000058d0(0x200000,0x100000,2,&local_4);
  return uVar1;
}

#undef local_4

#undef DAT_0000b5b8
#define DAT_0000b5b8 (*(uint64_t *)(((uintptr_t)efi_state + 0x25b8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1bd0
 */

ulonglong FUN_00001bd0(undefined8 param_1)

{
  unsigned char frame[64] = {0};

  ulonglong in_RAX;

  if ((DAT_0000b5b8 != 0) && (in_RAX = DAT_0000b5b8, *(longlong *)(DAT_0000b5b8 + 8) != 0)) {
    in_RAX = (**(code **)(DAT_0000b5b8 + 8))(DAT_0000b5b8,param_1);
  }
  return in_RAX;
}

#undef DAT_0000b5b8

#define local_40 (*(ulonglong *)(frame + 16))
#define local_38 (*(undefined2 (*)[16])(frame + 24))
#define local_18 (*(undefined2 *)(frame + 56))
#define local_8 (*(ulonglong *)(frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1c10
 */

ulonglong FUN_00001c10(ulonglong param_1)

{
  unsigned char frame[112] = {0};

  ulonglong uVar1;

  local_8 = param_1;
  for (local_40 = 0; local_40 < 0x10; local_40 = local_40 + 1) {
    uVar1 = FUN_00005a50(local_8 >> (('\x0f' - (char)local_40) * '\x04' & 0x3fU));
    local_38[local_40] = (short)uVar1;
  }
  local_18 = 0;
  uVar1 = FUN_00001bd0(local_38);
  return uVar1;
}

#undef local_40
#undef local_38
#undef local_18
#undef local_8

#define local_28 (*(ulonglong *)(frame + 16))
#define local_1c (*(undefined4 *)(frame + 28))
#define local_18 (*(undefined4 * *)(frame + 32))
#define local_10 (*(undefined4 * *)(frame + 40))
#define local_8 (*(ulonglong *)(frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1c80
 */

ulonglong FUN_00001c80(undefined4 *param_1,undefined4 *param_2)

{
  unsigned char frame[88] = {0};


  local_1c = 0;
  if ((param_1 == (undefined4 *)0x0) || (param_2 == (undefined4 *)0x0)) {
    local_8 = 0x8000000000000001;
  }
  else {
    local_18 = param_1;
    local_10 = param_2;
    local_28 = FUN_000058d0(0x1000000,0x800000,2,&local_1c);
    if ((longlong)local_28 < 0) {
      local_28 = FUN_000058d0(0,0x800000,2,&local_1c);
    }
    if ((longlong)local_28 < 0) {
      local_8 = local_28;
    }
    else {
      *local_18 = local_1c;
      *local_10 = 0x800000;
      local_8 = 0;
    }
  }
  return local_8;
}

#undef local_28
#undef local_1c
#undef local_18
#undef local_10
#undef local_8

#undef DAT_00009018
#define DAT_00009018 (*(uint8_t *)(((uintptr_t)efi_state + 0x18U)))
#undef DAT_0000b5b0
#define DAT_0000b5b0 (*(uint64_t *)(((uintptr_t)efi_state + 0x25b0U)))
#undef DAT_0000b5c0
#define DAT_0000b5c0 (*(uint64_t * *)(((uintptr_t)efi_state + 0x25c0U)))
#undef DAT_0000b5f0
#define DAT_0000b5f0 (*(uint64_t *)(((uintptr_t)efi_state + 0x25f0U)))
#undef DAT_0000b600
#define DAT_0000b600 (*(uint8_t *)(((uintptr_t)efi_state + 0x2600U)))
#define local_30 (*(longlong * *)(frame + 16))
#define local_28 (*(ulonglong *)(frame + 24))
#define local_20 (*(ulonglong *)(frame + 32))
#define local_18 (*(ulonglong *)(frame + 40))
#define local_10 (*(ulonglong *)(frame + 48))
#define local_8 (*(longlong *)(frame + 56))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1d40
 */

ulonglong FUN_00001d40(void)

{
  unsigned char frame[96] = {0};

  ulonglong uVar1;

  local_8 = 0;
  local_10 = 0;
  DAT_0000b5f0 = 0;
  for (local_20 = 0; local_20 < 8; local_20 = local_20 + 1) {
    *(undefined8 *)(&DAT_0000b600 + local_20 * 8) = 0;
  }
  uVar1 = FUN_00005aa0((longlong)DAT_0000b5c0);
  if ((((DAT_0000b5b0 != 0) && (uVar1 = DAT_0000b5b0, *(longlong *)(DAT_0000b5b0 + 0x138) != 0)) &&
      (*(longlong *)(DAT_0000b5b0 + 0x98) != 0)) &&
     (local_18 = (**(code **)(DAT_0000b5b0 + 0x138))(2,&DAT_00009018,0,&local_10,&local_8),
     uVar1 = local_18, -1 < (longlong)local_18)) {
    for (local_28 = 0; local_28 < local_10; local_28 = local_28 + 1) {
      local_30 = (longlong *)0x0;
      local_18 = (**(code **)(DAT_0000b5b0 + 0x98))
                           (*(undefined8 *)(local_8 + local_28 * 8),&DAT_00009018,&local_30);
      if ((-1 < (longlong)local_18) && (local_30 != (longlong *)0x0)) {
        if ((local_30 != DAT_0000b5c0) && (*local_30 != 0)) {
          (*(code *)*local_30)(local_30,0);
        }
        FUN_00005aa0((longlong)local_30);
      }
    }
    uVar1 = DAT_0000b5b0;
    if (*(longlong *)(DAT_0000b5b0 + 0x48) != 0) {
      uVar1 = (**(code **)(DAT_0000b5b0 + 0x48))(local_8);
    }
  }
  return uVar1;
}

#undef DAT_00009018
#undef DAT_0000b5b0
#undef DAT_0000b5c0
#undef DAT_0000b5f0
#undef DAT_0000b600
#undef local_30
#undef local_28
#undef local_20
#undef local_18
#undef local_10
#undef local_8

#undef DAT_00009028
#define DAT_00009028 (*(uint8_t *)(((uintptr_t)efi_state + 0x28U)))
#undef DAT_0000b5b0
#define DAT_0000b5b0 (*(uint64_t *)(((uintptr_t)efi_state + 0x25b0U)))
#undef DAT_0000b5d8
#define DAT_0000b5d8 (*(uint64_t *)(((uintptr_t)efi_state + 0x25d8U)))
#define local_58 (*(longlong *)(frame + 16))
#define local_50 (*(ulonglong *)(frame + 24))
#define local_48 (*(ulonglong *)(frame + 32))
#define local_40 (*(longlong *)(frame + 40))
#define local_38 (*(ulonglong *)(frame + 48))
#define local_30 (*(ulonglong *)(frame + 56))
#define local_28 (*(longlong *)(frame + 64))
#define local_20 (*(ulonglong *)(frame + 72))
#define local_18 (*(longlong * *)(frame + 80))
#define local_10 (*(ulonglong * *)(frame + 88))
#define local_8 (*(ulonglong *)(frame + 96))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1ee0
 */

ulonglong FUN_00001ee0(longlong *param_1,ulonglong *param_2)

{
  unsigned char frame[136] = {0};

  ulonglong uVar1;

  local_28 = 0;
  local_30 = 0;
  if ((param_1 == (longlong *)0x0) || (param_2 == (ulonglong *)0x0)) {
    local_8 = 0x8000000000000001;
  }
  else {
    *param_1 = 0;
    *param_2 = 0;
    if (((DAT_0000b5b0 == 0) || (*(longlong *)(DAT_0000b5b0 + 0x138) == 0)) ||
       (*(longlong *)(DAT_0000b5b0 + 0x98) == 0)) {
      local_8 = 0x8000000000000001;
    }
    else {
      local_18 = param_1;
      local_10 = param_2;
      local_20 = (**(code **)(DAT_0000b5b0 + 0x138))(2,&DAT_00009028,0,&local_30,&local_28);
      if ((longlong)local_20 < 0) {
        local_8 = local_20;
      }
      else {
        for (local_38 = 0; local_38 < local_30; local_38 = local_38 + 1) {
          local_40 = 0;
          local_48 = 0;
          local_50 = 0;
          local_20 = (**(code **)(DAT_0000b5b0 + 0x98))
                               (*(undefined8 *)(local_28 + local_38 * 8),&DAT_00009028,&local_40);
          if ((((-1 < (longlong)local_20) && (local_40 != 0)) &&
              ((*(longlong *)(local_40 + 8) != 0 &&
               ((*(char *)(*(longlong *)(local_40 + 8) + 5) != '\0' &&
                (*(char *)(*(longlong *)(local_40 + 8) + 6) == '\0')))))) &&
             (local_20 = FUN_00005b30(local_40,&local_48,&local_50), -1 < (longlong)local_20)) {
            *local_18 = local_40;
            *local_10 = local_50;
            DAT_0000b5d8 = local_48;
            if (*(longlong *)(DAT_0000b5b0 + 0x48) != 0) {
              (**(code **)(DAT_0000b5b0 + 0x48))(local_28);
            }
            return 0;
          }
        }
        for (local_38 = 0; local_38 < local_30; local_38 = local_38 + 1) {
          local_58 = 0;
          local_20 = (**(code **)(DAT_0000b5b0 + 0x98))
                               (*(undefined8 *)(local_28 + local_38 * 8),&DAT_00009028,&local_58);
          if ((((-1 < (longlong)local_20) && (local_58 != 0)) && (*(longlong *)(local_58 + 8) != 0))
             && ((*(char *)(*(longlong *)(local_58 + 8) + 5) != '\0' &&
                 (uVar1 = FUN_00005ea0(local_58,0,
                                       *(longlong *)(*(longlong *)(local_58 + 8) + 0x18) + 1),
                 (char)uVar1 != '\0')))) {
            *local_18 = local_58;
            *local_10 = *(longlong *)(*(longlong *)(local_58 + 8) + 0x18) + 1;
            DAT_0000b5d8 = 0;
            if (*(longlong *)(DAT_0000b5b0 + 0x48) != 0) {
              (**(code **)(DAT_0000b5b0 + 0x48))(local_28);
            }
            return 0;
          }
        }
        if (*(longlong *)(DAT_0000b5b0 + 0x48) != 0) {
          (**(code **)(DAT_0000b5b0 + 0x48))(local_28);
        }
        local_8 = 0x800000000000000e;
      }
    }
  }
  return local_8;
}

#undef DAT_00009028
#undef DAT_0000b5b0
#undef DAT_0000b5d8
#undef local_58
#undef local_50
#undef local_48
#undef local_40
#undef local_38
#undef local_30
#undef local_28
#undef local_20
#undef local_18
#undef local_10
#undef local_8

#define uStack_224 (*(undefined2 *)(frame + 20))
#define auStack_222 (*(undefined2 (*)[13])(frame + 22))
#define auStack_208 (*(undefined4 (*)[8])(frame + 48))
#define auStack_1e8 (*(undefined4 (*)[112])(frame + 80))
#define local_228 (*(undefined4 *)(frame + 16))
#define local_28 (*(longlong *)(frame + 528))
#define local_20 (*(uint * *)(frame + 536))
#define local_18 (*(uint * *)(frame + 544))
#define local_10 (*(undefined1 * *)(frame + 552))
#define local_8 (*(ulonglong *)(frame + 560))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2260
 */

ulonglong FUN_00002260(longlong param_1,uint *param_2,uint *param_3,undefined1 *param_4)

{
  unsigned char frame[600] = {0};

  ulonglong uVar1;
  ulonglong uVar2;

  if (((param_2 == (uint *)0x0) || (param_3 == (uint *)0x0)) || (param_4 == (undefined1 *)0x0)) {
    local_8 = 0x8000000000000001;
  }
  else {
    local_28 = param_1;
    local_20 = param_2;
    local_18 = param_3;
    local_10 = param_4;
    FUN_00004b30((longlong)param_2,0xc);
    FUN_00004b30((longlong)local_18,0xc);
    *local_10 = 0;
    local_8 = FUN_00006230(local_28,0x41,&local_228);
    if (-1 < (longlong)local_8) {
      uVar1 = FUN_00006200(auStack_222);
      uVar2 = FUN_00006110(&local_228);
      if ((((int)uVar2 == 0x54504257) &&
          (uVar2 = FUN_00006200(&uStack_224), ((uint)uVar2 & 0xffff) == 1)) && ((ushort)uVar1 != 0))
      {
        uVar2 = FUN_000062a0(auStack_208,local_20);
        if ((char)uVar2 == '\0') {
          return 0x8000000000000003;
        }
        if (((1 < (ushort)uVar1) &&
            (uVar1 = FUN_000062a0(auStack_1e8,local_18), (uVar1 & 0xff) != 0)) &&
           (*local_18 != *local_20)) {
          *local_10 = 1;
        }
        return 0;
      }
      local_8 = 0x8000000000000001;
    }
  }
  return local_8;
}

#undef uStack_224
#undef auStack_222
#undef auStack_208
#undef auStack_1e8
#undef local_228
#undef local_28
#undef local_20
#undef local_18
#undef local_10
#undef local_8

#define local_50 (*(undefined8 *)(frame + 16))
#define local_48 (*(undefined1 (*)[60])(frame + 24))
#define local_8 (*(ulonglong *)(frame + 88))
#define uStack_c (*(undefined2 *)(frame + 84))
#define uStack_a (*(undefined2 *)(frame + 86))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2420
 */

ulonglong FUN_00002420(ulonglong param_1)

{
  unsigned char frame[128] = {0};

  ulonglong uVar1;

  local_50 = 0x1f;
  uStack_a = 0;
  local_8 = param_1;
  if (param_1 == 0) {
    local_50 = 0x1e;
    uStack_c = 0x30;
  }
  else {
    for (; local_8 != 0 && local_50 != 0; local_8 = local_8 / 10) {
      *(short *)(local_48 + local_50 * 2 + -2) = (short)(local_8 % 10) + 0x30;
      local_50 = local_50 + -1;
    }
  }
  uVar1 = FUN_00001bd0(local_48 + local_50 * 2);
  return uVar1;
}

#undef local_50
#undef local_48
#undef local_8
#undef uStack_c
#undef uStack_a

#undef DAT_0000b5b0
#define DAT_0000b5b0 (*(uint64_t *)(((uintptr_t)efi_state + 0x25b0U)))
#undef DAT_0000b640
#define DAT_0000b640 (*(uint8_t *)(((uintptr_t)efi_state + 0x2640U)))
#undef DAT_0000b658
#define DAT_0000b658 (*(uint8_t *)(((uintptr_t)efi_state + 0x2658U)))
#define local_38 (*(ulonglong *)(frame + 16))
#define local_30 (*(longlong *)(frame + 24))
#define local_24 (*(undefined4 *)(frame + 36))
#define local_20 (*(ulonglong (*)[4])(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2500
 */

ulonglong FUN_00002500(void)

{
  unsigned char frame[104] = {0};

  longlong lVar1;

  local_20[2] = 0x40000;
  local_20[1] = 0;
  local_20[0] = 0;
  local_24 = 0;
  local_38 = 0;
  if ((DAT_0000b5b0 == 0) || (*(longlong *)(DAT_0000b5b0 + 0x38) == 0)) {
    local_20[3] = 0;
  }
  else {
    lVar1 = (**(code **)(DAT_0000b5b0 + 0x38))
                      (local_20 + 2,&DAT_0000b640,local_20 + 1,local_20,&local_24);
    if ((lVar1 < 0) || (local_20[0] < 0x28)) {
      local_20[3] = 0;
    }
    else {
      for (local_30 = 0; local_30 + local_20[0] <= local_20[2]; local_30 = local_20[0] + local_30) {
        if (*(int *)(&DAT_0000b640 + local_30) == 7) {
          local_38 = *(longlong *)(&DAT_0000b658 + local_30) * 0x1000 + local_38;
        }
      }
      local_20[3] = local_38;
    }
  }
  return local_20[3];
}

#undef DAT_0000b5b0
#undef DAT_0000b640
#undef DAT_0000b658
#undef local_38
#undef local_30
#undef local_24
#undef local_20

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2620
 */

ulonglong FUN_00002620(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;

  uVar1 = FUN_00002e70(0,0x1000,param_1);
  return uVar1;
}


#undef DAT_0000a2ba
#define DAT_0000a2ba (*(uint8_t *)(((uintptr_t)efi_state + 0x12baU)))
#define local_8 (*(ulonglong *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2640
 */

ulonglong FUN_00002640(longlong param_1,uint *param_2,uint *param_3,char param_4,undefined4 param_5,
                      uint *param_6,undefined8 *param_7)

{
  unsigned char frame[64] = {0};


  if (((param_2 == (uint *)0x0) || (param_6 == (uint *)0x0)) || (param_7 == (undefined8 *)0x0)) {
    local_8 = 0x8000000000000001;
  }
  else {
    FUN_00001bd0(L"Loading primary Permafrost payload.\r\n");
    local_8 = FUN_00006360(param_1,param_2,param_5,param_6);
    if ((longlong)local_8 < 0) {
      FUN_00001bd0(L"Primary Permafrost payload failed: 0x");
      FUN_00001c10(local_8);
      FUN_00001bd0(&DAT_0000a2ba);
      if ((param_4 != '\0') && (param_3 != (uint *)0x0)) {
        FUN_00001bd0(L"Loading recovery Permafrost payload.\r\n");
        local_8 = FUN_00006360(param_1,param_3,param_5,param_6);
        if ((longlong)local_8 < 0) {
          FUN_00001bd0(L"Recovery Permafrost payload failed: 0x");
          FUN_00001c10(local_8);
          FUN_00001bd0(&DAT_0000a2ba);
        }
        else {
          *param_7 = *(undefined8 *)param_3;
          *(uint *)(param_7 + 1) = param_3[2];
        }
      }
    }
    else {
      *param_7 = *(undefined8 *)param_2;
      *(uint *)(param_7 + 1) = param_2[2];
    }
  }
  return local_8;
}

#undef DAT_0000a2ba
#undef local_8

/* A compiler-generated SysV to Microsoft ABI bridge replaces the upstream
 * runtime instruction emitter. Both address spaces map its code and state. */
static uint32_t __attribute__((sysv_abi)) firmware_bridge(void *command)
{
  uintptr_t saved_flags,current_cr3,firmware_cr3;
  __asm__ volatile("pushfq; popq %0; mov %%cr3,%1; cld":"=r"(saved_flags),"=r"(current_cr3)::"memory");
  firmware_cr3=*(uint64_t *)(efi_state+0x25e0);
  if(firmware_cr3) __asm__ volatile("mov %0,%%cr3"::"r"(firmware_cr3):"memory");
  __asm__ volatile("sti":::"memory");
  uint32_t result=recovered_7e60(command);
  __asm__ volatile("cli":::"memory");
  if(current_cr3) __asm__ volatile("mov %0,%%cr3"::"r"(current_cr3):"memory");
  saved_flags &= ~(uintptr_t)0x200;
  __asm__ volatile("pushq %0; popfq"::"r"(saved_flags):"memory","cc");
  return result;
}
ulonglong FUN_000027e0(uint *entry,int *command)
{
  uint32_t address=0;
  if(!entry||!command)return 0x8000000000000001ULL;
  uint64_t status=FUN_000058d0(0,0x1000,2,&address);
  if((int64_t)status<0)return status;
  *entry=(uintptr_t)firmware_bridge;*command=address;
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2e70
 */

ulonglong FUN_00002e70(uint param_1,int param_2,undefined4 *param_3)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;

  uVar1 = FUN_000058d0(param_1,param_2,2,param_3);
  return uVar1;
}


#undef DAT_0000b5b0
#define DAT_0000b5b0 (*(uint64_t *)(((uintptr_t)efi_state + 0x25b0U)))
#undef DAT_0004b640
#define DAT_0004b640 (*(uint8_t *)(((uintptr_t)efi_state + 0x42640U)))
#undef DAT_0004b648
#define DAT_0004b648 (*(uint8_t *)(((uintptr_t)efi_state + 0x42648U)))
#undef DAT_0004b658
#define DAT_0004b658 (*(uint8_t *)(((uintptr_t)efi_state + 0x42658U)))
#define local_210 (*(ulonglong *)(frame + 264))
#define local_208 (*(ulonglong *)(frame + 272))
#define local_200 (*(uint *)(frame + 280))
#define local_1fc (*(undefined4 *)(frame + 284))
#define local_1f8 (*(ulonglong (*)[6])(frame + 288))
#define local_1c8 (*(uint *)(frame + 336))
#define local_198 (*(ulonglong (*)[2])(frame + 384))
#define local_10 (*(uint * *)(frame + 776))
#define local_8 (*(ulonglong *)(frame + 784))
#define local_308 (*(ulonglong *)(frame + 16))
#define local_2f8 (*(ulonglong *)(frame + 32))
#define local_2f0 (*(ulonglong *)(frame + 40))
#define local_2e8 (*(ulonglong *)(frame + 48))
#define local_2e0 (*(ulonglong *)(frame + 56))
#define local_2d8 (*(ulonglong *)(frame + 64))
#define local_2d0 (*(ulonglong *)(frame + 72))
#define local_2b8 (*(ulonglong *)(frame + 96))
#define local_2b0 (*(ulonglong *)(frame + 104))
#define local_2a8 (*(uint *)(frame + 112))
#define local_2a4 (*(uint *)(frame + 116))
#define acStack_188 (*(char (*)[376])(frame + 400))
#define local_2a0 (*(ulonglong *)(frame + 120))
#define local_292 (*(char *)(frame + 134))
#define local_291 (*(char *)(frame + 135))
#define local_290 (*(ulonglong *)(frame + 136))
#define local_288 (*(ulonglong *)(frame + 144))
#define local_280 (*(ulonglong *)(frame + 152))
#define local_278 (*(ulonglong *)(frame + 160))
#define local_270 (*(ulonglong *)(frame + 168))
#define local_268 (*(ulonglong *)(frame + 176))
#define local_260 (*(ulonglong *)(frame + 184))
#define local_258 (*(ulonglong *)(frame + 192))
#define local_250 (*(ulonglong *)(frame + 200))
#define local_248 (*(int * *)(frame + 208))
#define local_240 (*(longlong *)(frame + 216))
#define local_238 (*(ulonglong *)(frame + 224))
#define local_230 (*(ulonglong *)(frame + 232))
#define local_228 (*(undefined * *)(frame + 240))
#define local_220 (*(longlong *)(frame + 248))
#define local_218 (*(ulonglong *)(frame + 256))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2ea0
 */

ulonglong FUN_00002ea0(uint *param_1)

{
  unsigned char frame[824] = {0};

  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  bool bVar4;

  local_1f8[4] = 0;
  local_1f8[3] = 0;
  local_1f8[2] = 0x40000;
  local_1f8[1] = 0;
  local_1f8[0] = 0;
  local_1fc = 0;
  local_200 = 0x400000;
  local_208 = 0;
  local_210 = 0;
  if (param_1 == (uint *)0x0) {
    local_8 = 0x8000000000000001;
  }
  else {
    local_10 = param_1;
    FUN_00004b30((longlong)param_1,0x5a8);
    FUN_00004b30((longlong)local_198,0x180);
    FUN_00004b30((uintptr_t)(efi_state+0x82640),0x1000);
    FUN_00004b30((longlong)(local_1f8 + 5),0x38);
    FUN_000086e0((uintptr_t)(efi_state+0x82640),local_1f8 + 3,0x80000000,0x90000000);
    uVar2 = FUN_00005330(local_1f8 + 5);
    if (((-1 < (longlong)uVar2) && (local_1f8[5] != 0)) && (local_1c8 != 0)) {
      FUN_000086e0((uintptr_t)(efi_state+0x82640),local_1f8 + 3,local_1f8[5],local_1f8[5] + local_1c8);
    }
    if ((DAT_0000b5b0 == 0) || (*(longlong *)(DAT_0000b5b0 + 0x38) == 0)) {
      local_8 = 0x8000000000000001;
    }
    else {
      local_2e0 = (**(code **)(DAT_0000b5b0 + 0x38))
                            (local_1f8 + 2,&DAT_0004b640,local_1f8 + 1,local_1f8,&local_1fc);
      if (((longlong)local_2e0 < 0) || (local_1f8[0] < 0x28)) {
        if (-1 < (longlong)local_2e0) {
          local_2e0 = 0x8000000000000001;
        }
        local_8 = local_2e0;
      }
      else {
        local_218 = local_2e0;
        for (local_220 = 0; local_220 + local_1f8[0] <= local_1f8[2];
            local_220 = local_1f8[0] + local_220) {
          local_228 = &DAT_0004b640 + local_220;
          if (*(longlong *)(&DAT_0004b658 + local_220) != 0) {
            local_230 = *(ulonglong *)(&DAT_0004b648 + local_220);
            if (-local_230 - 1 >> 0xc < *(ulonglong *)(&DAT_0004b658 + local_220)) {
              local_238 = 0xffffffffffffffff;
            }
            else {
              local_238 = local_230 + *(longlong *)(&DAT_0004b658 + local_220) * 0x1000;
            }
            if (local_230 < local_238) {
              FUN_000086e0((uintptr_t)(efi_state+0x82640),local_1f8 + 3,local_230,local_238);
            }
          }
        }
        local_208 = 0x80000000;
        local_210 = 0x7c000000;
        for (local_240 = 0; local_240 + local_1f8[0] <= local_1f8[2];
            local_240 = local_1f8[0] + local_240) {
          local_248 = (int *)(&DAT_0004b640 + local_240);
          if ((*local_248 == 7) && (*(longlong *)(&DAT_0004b658 + local_240) != 0)) {
            local_250 = *(ulonglong *)(&DAT_0004b648 + local_240);
            if (-local_250 - 1 >> 0xc < *(ulonglong *)(&DAT_0004b658 + local_240)) {
              local_258 = 0xffffffffffffffff;
            }
            else {
              local_258 = local_250 + *(longlong *)(&DAT_0004b658 + local_240) * 0x1000;
            }
            if (local_250 < local_258) {
              if ((local_250 < 0x100000000) && (0x300000 < local_258)) {
                if (local_250 < 0x300000) {
                  local_2e8 = 0x300000;
                }
                else {
                  local_2e8 = local_250;
                }
                local_260 = local_2e8;
                if (local_258 < 0x100000001) {
                  local_2f0 = local_258;
                }
                else {
                  local_2f0 = 0x100000000;
                }
                local_268 = local_2f0;
                local_260 = FUN_00004f60(local_2e8,0x1000);
                local_268 = FUN_00004f30(local_268,0x1000);
                if (local_260 < local_268) {
                  FUN_00008790((longlong)local_198,local_1f8 + 4,local_260,local_268 - local_260,
                               '\0',0);
                }
              }
              if (0x100000000 < local_258) {
                if (local_250 < 0x100000000) {
                  local_2f8 = 0x100000000;
                }
                else {
                  local_2f8 = local_250;
                }
                local_270 = local_2f8;
                local_278 = local_258;
                local_270 = FUN_00004f60(local_2f8,0x200000);
                local_278 = FUN_00004f30(local_278,0x200000);
                if (local_270 < local_278) {
                  FUN_00008790((longlong)local_198,local_1f8 + 4,local_270,local_278 - local_270,
                               '\0',1);
                }
              }
            }
          }
        }
        for (local_280 = 0; local_280 < local_1f8[4]; local_280 = local_280 + 1) {
          local_288 = local_198[local_280 * 3];
          local_290 = local_198[local_280 * 3 + 1];
          local_291 = acStack_188[local_280 * 0x18];
          local_292 = acStack_188[local_280 * 0x18 + 1];
          uVar1 = 0x1000;
          if (local_291 != '\0') {
            uVar1 = 0x200000;
          }
          local_2a0 = (ulonglong)uVar1;
          local_2a4 = 0;
          if (local_291 != '\0') {
LAB_000035e8:
            while( true ) {
              uVar2 = local_290;
              bVar4 = false;
              if ((0x1fffff < local_290) && (bVar4 = false, *local_10 < 0x10)) {
                bVar4 = local_10[0x126] < 0x10;
              }
              if (!bVar4) goto LAB_00003f62;
              local_2b0 = 0;
              local_2b8 = local_290;
              uVar3 = FUN_000089a0((uintptr_t)(efi_state+0x82640),local_1f8[3],0x80000000,&local_208,&local_2b0);
              if ((char)uVar3 == '\0') break;
              local_210 = local_2b0 - local_208;
              if (local_210 < 0x200000) goto LAB_00003f62;
              if (local_210 < uVar2) {
                local_2b8 = local_210;
              }
              if (0xffffffff < local_2b8) {
                local_2b8 = 0xffffffff;
              }
              local_2b8 = FUN_00004f30(local_2b8,0x200000);
              if (local_2b8 == 0) goto LAB_00003f62;
              uVar2 = local_2b8;
              if (local_200 == 0) goto LAB_0000382f;
              if (local_200 < local_2b8) goto LAB_00003799;
              local_200 = local_200 - (int)local_2b8;
              local_288 = local_2b8 + local_288;
              local_290 = local_290 - local_2b8;
            }
            local_210 = 0;
            goto LAB_00003f62;
          }
          if (local_292 == '\0') {
            if (*local_10 < 0x10) {
              if (0xffffffff < local_290) {
                local_290 = 0xffffffff;
              }
              local_290 = FUN_00004f30(local_290,local_2a0);
              if (local_290 != 0) {
                if (local_200 == 0) {
LAB_00003eba:
                  local_2a8 = (uint)local_290;
                  if (local_291 == '\0') {
                    local_218 = FUN_00008ba0(local_288,local_290 & 0xffffffff);
                    if ((longlong)local_218 < 0) goto LAB_00003f62;
                    FUN_00004b30(local_288 & 0xffffffff,(ulonglong)local_2a8);
                    local_2a4 = (uint)local_288;
                  }
                  FUN_00008cf0(local_10,local_2a4,local_2a8);
                  FUN_00008d70((longlong)local_10,local_288,(ulonglong)local_2a8);
                }
                else if (local_200 < local_290) {
                  local_288 = local_200 + local_288;
                  local_290 = local_290 - local_200;
                  local_200 = 0;
                  local_290 = FUN_00004f30(local_290,local_2a0);
                  if (local_290 != 0) goto LAB_00003eba;
                }
                else {
                  local_200 = local_200 - (int)local_290;
                }
              }
            }
          }
          else {
            local_290 = FUN_00004f30(local_290,local_2a0);
            if (local_290 != 0) {
              if (local_200 == 0) {
LAB_00003c00:
                while( true ) {
                  bVar4 = false;
                  if (0x3ffffff < local_290) {
                    bVar4 = local_10[0x22] < 0x40;
                  }
                  if (!bVar4) break;
                  for (local_2d8 = FUN_00004f30(local_290,0x200000); 0x3ffffff < local_2d8;
                      local_2d8 = FUN_00004f30(local_2d8 >> 1,0x200000)) {
                    local_2d0 = FUN_00004f30((local_288 + local_290) - local_2d8,0x200000);
                    if ((local_2d0 < local_288) || (local_288 + local_290 < local_2d0 + local_2d8))
                    {
                      local_218 = 0x8000000000000009;
                    }
                    else {
                      local_218 = FUN_00008ba0(local_2d0,local_2d8);
                    }
                    if (-1 < (longlong)local_218) break;
                  }
                  if (local_2d8 < 0x4000000) {
                    local_290 = local_290 - 0x4000000;
                    local_290 = FUN_00004f30(local_290,0x200000);
                  }
                  else {
                    FUN_00008d70((longlong)local_10,local_2d0,local_2d8);
                    if (local_288 < local_2d0) {
                      local_308 = local_2d0 - local_288;
                    }
                    else {
                      local_308 = 0;
                    }
                    local_290 = local_308;
                  }
                }
              }
              else if (local_200 < local_290) {
                local_288 = local_200 + local_288;
                local_290 = local_290 - local_200;
                local_200 = 0;
                local_290 = FUN_00004f30(local_290,local_2a0);
                if (local_290 != 0) goto LAB_00003c00;
              }
              else {
                local_200 = local_200 - (int)local_290;
              }
            }
          }
LAB_00003f62:
        }
        bVar4 = true;
        if (local_10[0x21] == 0) {
          bVar4 = *(longlong *)(local_10 + 0x124) != 0;
        }
        local_8 = 0x8000000000000009;
        if (bVar4) {
          local_8 = 0;
        }
      }
    }
  }
  return local_8;
LAB_00003799:
  local_288 = local_200 + local_288;
  local_290 = local_290 - local_200;
  uVar2 = (ulonglong)local_200;
  local_200 = 0;
  local_2b8 = FUN_00004f30(local_2b8 - uVar2,0x200000);
  uVar2 = local_2b8;
  if (local_2b8 != 0) {
LAB_0000382f:
    do {
      local_218 = FUN_00008ba0(local_288,local_2b8);
      if (((-1 < (longlong)local_218) || (local_2b8 < 0x200001)) ||
         (local_2b8 = FUN_00004f30(local_2b8 >> 1,0x200000), local_2b8 == 0)) break;
    } while (local_2b8 <= local_210);
    if (((longlong)local_218 < 0) || (local_2b8 == 0)) {
      uVar3 = FUN_00008ce0();
      if (((uVar3 & 0xff) == 0) || (uVar2 == 0)) {
        local_288 = local_288 + 0x200000;
        local_290 = local_290 - 0x200000;
        goto LAB_000035e8;
      }
      local_2b8 = uVar2;
    }
    local_2a8 = (uint)local_2b8;
    local_2a4 = (uint)local_208;
    local_10[(ulonglong)local_10[0x126] + 0x127] = local_2a4;
    local_10[(ulonglong)local_10[0x126] + 0x137] = local_2a8;
    local_10[(ulonglong)local_10[0x126] + 0x147] = (uint)local_288;
    local_10[(ulonglong)local_10[0x126] + 0x157] = (uint)(local_288 >> 0x20);
    local_10[0x126] = local_10[0x126] + 1;
    local_210 = local_210 - (local_2b8 & 0xffffffff);
    uVar2 = (local_208 & 0xffffffff) + (local_2b8 & 0xffffffff);
    if ((local_10[0x167] == 0) || (local_2a4 < local_10[0x167])) {
      local_10[0x167] = local_2a4;
    }
    if (local_10[0x167] < uVar2) {
      local_10[0x168] = (int)uVar2 - local_10[0x167];
    }
    local_208 = (local_2b8 & 0xffffffff) + local_208;
    FUN_00008cf0(local_10,local_2a4,local_2a8);
    local_288 = local_2a8 + local_288;
    local_290 = local_290 - local_2a8;
  }
  goto LAB_000035e8;
}

#undef DAT_0000b5b0
#undef DAT_0004b640
#undef DAT_0004b648
#undef DAT_0004b658
#undef local_210
#undef local_208
#undef local_200
#undef local_1fc
#undef local_1f8
#undef local_1c8
#undef local_198
#undef local_10
#undef local_8
#undef local_308
#undef local_2f8
#undef local_2f0
#undef local_2e8
#undef local_2e0
#undef local_2d8
#undef local_2d0
#undef local_2b8
#undef local_2b0
#undef local_2a8
#undef local_2a4
#undef acStack_188
#undef local_2a0
#undef local_292
#undef local_291
#undef local_290
#undef local_288
#undef local_280
#undef local_278
#undef local_270
#undef local_268
#undef local_260
#undef local_258
#undef local_250
#undef local_248
#undef local_240
#undef local_238
#undef local_230
#undef local_228
#undef local_220
#undef local_218

#undef DAT_0000b5a8
#define DAT_0000b5a8 (*(uint64_t *)(((uintptr_t)efi_state + 0x25a8U)))
#undef DAT_0000b5b0
#define DAT_0000b5b0 (*(uint64_t *)(((uintptr_t)efi_state + 0x25b0U)))
#undef DAT_0000b5d8
#define DAT_0000b5d8 (*(uint64_t *)(((uintptr_t)efi_state + 0x25d8U)))
#undef DAT_0008c640
#define DAT_0008c640 (*(uint8_t *)(((uintptr_t)efi_state + 0x83640U)))
#undef IMAGE_DOS_HEADER_00000000
#define IMAGE_DOS_HEADER_00000000 (*(uint32_t *)(0x0U))
#define local_e8 (*(undefined8 *)(frame + 16))
#define local_e0 (*(undefined8 *)(frame + 24))
#define local_d4 (*(int *)(frame + 36))
#define local_cc (*(int *)(frame + 44))
#define local_c8 (*(int *)(frame + 48))
#define local_c4 (*(int *)(frame + 52))
#define local_c0 (*(int *)(frame + 56))
#define local_bc (*(int *)(frame + 60))
#define local_b8 (*(int *)(frame + 64))
#define local_b4 (*(int *)(frame + 68))
#define local_b0 (*(int *)(frame + 72))
#define local_ac (*(int *)(frame + 76))
#define local_a8 (*(int *)(frame + 80))
#define local_a4 (*(undefined4 *)(frame + 84))
#define local_a0 (*(int *)(frame + 88))
#define local_9c (*(int *)(frame + 92))
#define local_98 (*(undefined4 *)(frame + 96))
#define local_94 (*(undefined4 *)(frame + 100))
#define local_90 (*(undefined4 *)(frame + 104))
#define local_8c (*(undefined4 *)(frame + 108))
#define local_88 (*(ulonglong *)(frame + 112))
#define local_80 (*(ulonglong *)(frame + 120))
#define local_78 (*(undefined4 * *)(frame + 128))
#define local_70 (*(undefined4 * *)(frame + 136))
#define local_60 (*(undefined8 *)(frame + 152))
#define local_58 (*(undefined4 *)(frame + 160))
#define local_54 (*(undefined4 *)(frame + 164))
#define local_50 (*(undefined4 *)(frame + 168))
#define local_4c (*(undefined4 *)(frame + 172))
#define local_48 (*(undefined4 *)(frame + 176))
#define local_44 (*(undefined4 *)(frame + 180))
#define local_40 (*(undefined4 *)(frame + 184))
#define local_3c (*(undefined4 *)(frame + 188))
#define local_38 (*(undefined4 *)(frame + 192))
#define local_34 (*(undefined4 *)(frame + 196))
#define local_30 (*(undefined4 *)(frame + 200))
#define local_28 (*(undefined4 * *)(frame + 208))
#define local_20 (*(longlong *)(frame + 216))
#define local_18 (*(undefined4 * *)(frame + 224))
#define local_10 (*(undefined8 *)(frame + 232))
#define local_8 (*(ulonglong *)(frame + 240))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3fe0
 */

ulonglong FUN_00003fe0(longlong param_1,undefined4 *param_2,undefined8 param_3,ulonglong param_4,
                      int *param_5,ulonglong param_6,undefined4 param_7,undefined4 param_8,
                      undefined4 *param_9)

{
  unsigned char frame[280] = {0};

  undefined4 *puVar1;
  undefined4 uVar2;
  bool bVar3;

  if (param_9 == (undefined4 *)0x0) {
    local_78 = (undefined4 *)&DAT_0008c640;
  }
  else {
    local_78 = param_9;
  }
  local_28 = local_78;
  if ((param_5 == (int *)0x0) || (*(longlong *)(param_5 + 0x124) == 0)) {
    if (param_5 == (int *)0x0) {
      local_88 = 0;
    }
    else {
      local_88 = (ulonglong)(uint)param_5[0x21];
    }
    local_80 = local_88;
  }
  else {
    local_80 = *(ulonglong *)(param_5 + 0x124);
  }
  local_20 = param_1;
  local_18 = param_2;
  local_10 = param_3;
  local_8 = param_4;
  FUN_00004b30((longlong)&local_60,0x38);
  FUN_00005330(&local_60);
  if (param_6 < local_80) {
    param_6 = local_80;
  }
  *local_28 = 0x33454657;
  local_28[1] = 1;
  local_28[2] = 0x650;
  local_28[3] = (int)DAT_0000b5a8;
  local_28[4] = (int)DAT_0000b5b0;
  local_28[5] = 0;
  local_28[6] = 0;
  local_28[7] = 0;
  local_28[8] = 0;
  if ((local_20 == 0) || (*(longlong *)(local_20 + 8) == 0)) {
    local_8c = 0;
  }
  else {
    local_8c = **(undefined4 **)(local_20 + 8);
  }
  local_28[9] = local_8c;
  local_28[10] = (int)local_10;
  if (local_18 == (undefined4 *)0x0) {
    local_90 = 0;
  }
  else {
    local_90 = *local_18;
  }
  local_28[0xb] = local_90;
  if (local_18 == (undefined4 *)0x0) {
    local_94 = 0;
  }
  else {
    local_94 = local_18[1];
  }
  local_28[0xc] = local_94;
  if (local_18 == (undefined4 *)0x0) {
    local_98 = 0;
  }
  else {
    local_98 = local_18[2];
  }
  local_28[0xd] = local_98;
  if ((param_5 == (int *)0x0) || (*param_5 == 0)) {
    local_9c = 0;
  }
  else {
    local_9c = param_5[1];
  }
  local_28[0xe] = local_9c;
  if ((param_5 == (int *)0x0) || (*param_5 == 0)) {
    local_a0 = 0;
  }
  else {
    local_a0 = param_5[0x11];
  }
  local_28[0xf] = local_a0;
  local_28[0x10] = 0;
  local_28[0x11] = 0;
  local_28[0x12] = (int)DAT_0000b5d8;
  local_28[0x13] = (int)local_60;
  local_28[0x14] = local_58;
  local_28[0x15] = local_54;
  local_28[0x16] = local_50;
  local_28[0x17] = local_4c;
  local_28[0x18] = local_48;
  local_28[0x19] = local_44;
  local_28[0x1a] = local_40;
  local_28[0x1b] = local_3c;
  local_28[0x1c] = local_38;
  local_28[0x1d] = local_34;
  local_28[0x1e] = local_30;
  local_28[0x192] = (int)((ulonglong)local_60 >> 0x20);
  local_28[0x1f] = (int)param_6;
  local_28[0x20] = (int)(param_6 >> 0x20);
  if (local_8 < 0x100000000) {
    local_a4 = (undefined4)local_8;
  }
  else {
    local_a4 = 0;
  }
  local_28[0x21] = local_a4;
  local_28[0x22] = 0;
  local_28[0x23] = 0;
  if (param_5 == (int *)0x0) {
    local_a8 = 0;
  }
  else {
    local_a8 = *param_5;
  }
  local_28[0x24] = local_a8;
  for (local_70 = (undefined4 *)0x0; local_70 < 0x10;
      local_70 = (undefined4 *)((longlong)local_70 + 1)) {
    if (param_5 == (int *)0x0) {
      local_ac = 0;
    }
    else {
      local_ac = param_5[(longlong)local_70 + 1];
    }
    local_28[(longlong)local_70 + 0x25] = local_ac;
    if (param_5 == (int *)0x0) {
      local_b0 = 0;
    }
    else {
      local_b0 = param_5[(longlong)local_70 + 0x11];
    }
    local_28[(longlong)local_70 + 0x35] = local_b0;
  }
  local_28[0x45] = 0;
  local_28[0x46] = 0;
  if (param_5 == (int *)0x0) {
    local_b4 = 0;
  }
  else {
    local_b4 = param_5[0x126];
  }
  local_28[0x47] = local_b4;
  for (local_70 = (undefined4 *)0x0; local_70 < 0x10;
      local_70 = (undefined4 *)((longlong)local_70 + 1)) {
    if (param_5 == (int *)0x0) {
      local_b8 = 0;
    }
    else {
      local_b8 = param_5[(longlong)local_70 + 0x127];
    }
    local_28[(longlong)local_70 + 0x48] = local_b8;
    if (param_5 == (int *)0x0) {
      local_bc = 0;
    }
    else {
      local_bc = param_5[(longlong)local_70 + 0x137];
    }
    local_28[(longlong)local_70 + 0x58] = local_bc;
    if (param_5 == (int *)0x0) {
      local_c0 = 0;
    }
    else {
      local_c0 = param_5[(longlong)local_70 + 0x147];
    }
    local_28[(longlong)local_70 + 0x68] = local_c0;
    if (param_5 == (int *)0x0) {
      local_c4 = 0;
    }
    else {
      local_c4 = param_5[(longlong)local_70 + 0x157];
    }
    local_28[(longlong)local_70 + 0x78] = local_c4;
  }
  if (param_5 == (int *)0x0) {
    local_c8 = 0;
  }
  else {
    local_c8 = param_5[0x167];
  }
  local_28[0x88] = local_c8;
  if (param_5 == (int *)0x0) {
    local_cc = 0;
  }
  else {
    local_cc = param_5[0x168];
  }
  local_28[0x89] = local_cc;
  bVar3 = false;
  if (param_5 != (int *)0x0) {
    bVar3 = param_5[0x168] != 0;
  }
  uVar2 = 0;
  if (bVar3) {
    uVar2 = 0xfc000000;
  }
  local_28[0x8a] = uVar2;
  bVar3 = false;
  if (param_5 != (int *)0x0) {
    bVar3 = param_5[0x168] != 0;
  }
  uVar2 = 0;
  if (bVar3) {
    uVar2 = 0x4000000;
  }
  local_28[0x8b] = uVar2;
  local_28[0x8c] = 1;
  local_28[0x8d] = param_7;
  local_28[0x8e] = param_8;
  bVar3 = false;
  if (param_5 != (int *)0x0) {
    bVar3 = param_5[0x22] != 0;
  }
  uVar2 = 0;
  if (bVar3) {
    uVar2 = 0x34364857;
  }
  local_28[0x8f] = uVar2;
  if (param_5 == (int *)0x0) {
    local_d4 = 0;
  }
  else {
    local_d4 = param_5[0x22];
  }
  local_28[0x90] = local_d4;
  local_28[0x91] = 0;
  local_70 = (undefined4 *)0x0;
  puVar1 = local_28;
  while (local_70 < (void *)0x40) {
    if (param_5 == (int *)0x0) {
      local_e0 = 0;
    }
    else {
      local_e0 = *(undefined8 *)(param_5 + (longlong)local_70 * 2 + 0x24);
    }
    *(undefined8 *)(local_28 + (longlong)local_70 * 2 + 0x92) = local_e0;
    if (param_5 == (int *)0x0) {
      local_e8 = 0;
    }
    else {
      local_e8 = *(undefined8 *)(param_5 + (longlong)local_70 * 2 + 0xa4);
    }
    *(undefined8 *)(local_28 + (longlong)local_70 * 2 + 0x112) = local_e8;
    puVar1 = (undefined4 *)((longlong)local_70 + 1);
    local_70 = puVar1;
  }
  return (ulonglong)puVar1;
}

#undef DAT_0000b5a8
#undef DAT_0000b5b0
#undef DAT_0000b5d8
#undef DAT_0008c640
#undef IMAGE_DOS_HEADER_00000000
#undef local_e8
#undef local_e0
#undef local_d4
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
#undef local_98
#undef local_94
#undef local_90
#undef local_8c
#undef local_88
#undef local_80
#undef local_78
#undef local_70
#undef local_60
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
#undef local_28
#undef local_20
#undef local_18
#undef local_10
#undef local_8

#undef DAT_02000000
#define DAT_02000000 (*(uint8_t *)(0x2000000U))
#undef DAT_02000010
#define DAT_02000010 (*(uint8_t *)(0x2000010U))
#undef _DAT_02000000
#define _DAT_02000000 (*(int *)(0x2000000U))
#undef _DAT_02000010
#define _DAT_02000010 (*(uint32_t *)(0x2000010U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x4a50
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_00004a50(undefined4 param_1)

{
  unsigned char frame[64] = {0};

  if (_DAT_02000000 == 0x504c4d57) {
    _DAT_02000010 = param_1;
  }
  return 0x2000000;
}

#undef DAT_02000000
#undef DAT_02000010
#undef _DAT_02000000
#undef _DAT_02000010

ulonglong FUN_00004a80(void) { uintptr_t value; __asm__ volatile("mov %%cr3,%0":"=r"(value)); return value; }


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x4aa0
 */

ulonglong FUN_00004aa0(void)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;

  uVar1 = FUN_00008ee0();
  if ((uVar1 & 0x60000000) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00008f00(uVar1 & 0xffffffff9fffffff);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x4af0
 */

ulonglong FUN_00004af0(uint param_1)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;

                    /* WARNING: Could not recover jumptable at 0x00004b23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulonglong)param_1)((code *)(ulonglong)param_1);
  return uVar1;
}


#define local_20 (*(ulonglong *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x4b30
 */

ulonglong FUN_00004b30(longlong param_1,ulonglong param_2)

{
  unsigned char frame[80] = {0};


  for (local_20 = 0; local_20 < param_2; local_20 = local_20 + 1) {
    *(undefined1 *)(param_1 + local_20) = 0;
  }
  return local_20;
}

#undef local_20

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x4b80
 */

ulonglong FUN_00004b80(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  unsigned char frame[64] = {0};

  undefined4 *puVar1;

  puVar1 = (undefined4 *)(ulonglong)(uint)(param_1 + param_2 * 8);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  return (ulonglong)puVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x4bd0
 */

ulonglong FUN_00004bd0(ulonglong param_1,undefined8 param_2,uint param_3)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;

  uVar1 = 0x1c0000000;
  if (param_1 < 0x1c0000000) {
    uVar1 = FUN_00004b80((int)(param_1 >> 0x1e) * 0x1000 + 0x2f9000,(uint)(param_1 >> 0x15) & 0x1ff,
                         (uint)param_2 & 0xffe00000 | param_3,(int)((ulonglong)param_2 >> 0x20));
  }
  return uVar1;
}


#define local_40 (*(ulonglong *)(frame + 16))
#define local_30 (*(ulonglong *)(frame + 32))
#define local_24 (*(uint *)(frame + 44))
#define local_8 (*(ulonglong *)(frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x4c60
 */

ulonglong FUN_00004c60(longlong param_1)

{
  unsigned char frame[112] = {0};

  ulonglong uVar1;
  ulonglong uVar2;

  local_8 = FUN_00004e20();
  if (-1 < (longlong)local_8) {
    if ((param_1 == 0) || (*(int *)(param_1 + 0x88) == 0)) {
      local_8 = 0;
    }
    else {
      for (local_24 = 0; local_24 < *(uint *)(param_1 + 0x88) && local_24 < 0x40;
          local_24 = local_24 + 1) {
        local_30 = *(ulonglong *)(param_1 + 0x90 + (ulonglong)local_24 * 8);
        uVar1 = local_30 + *(longlong *)(param_1 + 0x290 + (ulonglong)local_24 * 8);
        if (((*(longlong *)(param_1 + 0x290 + (ulonglong)local_24 * 8) != 0) && (local_30 < uVar1))
           && (0x1c0000000 < uVar1)) {
          if (local_30 < 0x1c0000000) {
            local_30 = 0x1c0000000;
          }
          local_40 = FUN_00004f30(local_30,0x200000);
          uVar1 = FUN_00004f60(uVar1,0x200000);
          for (; local_40 < uVar1; local_40 = local_40 + 0x200000) {
            uVar2 = FUN_00004f90(local_40,0);
            if ((longlong)uVar2 < 0) {
              return uVar2;
            }
          }
        }
      }
      local_8 = 0;
    }
  }
  return local_8;
}

#undef local_40
#undef local_30
#undef local_24
#undef local_8

#define local_10 (*(undefined8 *)(frame + 80))
#define local_8 (*(ulonglong *)(frame + 88))
#define local_50 (*(ulonglong *)(frame + 16))
#define local_48 (*(uint *)(frame + 24))
#define local_18 (*(ulonglong *)(frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x4e20
 */

ulonglong FUN_00004e20(void)

{
  unsigned char frame[128] = {0};

  ulonglong uVar1;

  local_10 = 0;
  local_18 = FUN_00005220((uintptr_t)FUN_000012f0,0x200000,0);
  if ((longlong)local_18 < 0) {
    local_8 = local_18;
  }
  else {
    local_18 = FUN_00005220((uintptr_t)(efi_state+0x25e0),0x200000,0);
    if ((longlong)local_18 < 0) {
      local_8 = local_18;
    }
    else {
      local_18 = FUN_00005220((ulonglong)&local_10,0x200000,0);
      if ((longlong)local_18 < 0) {
        local_8 = local_18;
      }
      else {
        FUN_00004b30((longlong)&local_50,0x38);
        uVar1 = FUN_00005330(&local_50);
        if (((((longlong)uVar1 < 0) || (local_50 == 0)) || (local_48 == 0)) ||
           (local_8 = FUN_00005220(local_50,(ulonglong)local_48,0), -1 < (longlong)local_8)) {
          local_8 = 0;
        }
      }
    }
  }
  return local_8;
}

#undef local_10
#undef local_8
#undef local_50
#undef local_48
#undef local_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x4f30
 */

ulonglong FUN_00004f30(ulonglong param_1,longlong param_2)

{
  unsigned char frame[64] = {0};

  return param_1 & (param_2 - 1U ^ 0xffffffffffffffff);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x4f60
 */

ulonglong FUN_00004f60(longlong param_1,longlong param_2)

{
  unsigned char frame[64] = {0};

  return (param_1 + param_2) - 1U & (param_2 - 1U ^ 0xffffffffffffffff);
}


#define local_68 (*(ulonglong *)(frame + 24))
#define local_60 (*(ulonglong *)(frame + 32))
#define local_58 (*(ulonglong *)(frame + 40))
#define local_48 (*(ulonglong *)(frame + 56))
#define local_40 (*(longlong *)(frame + 64))
#define local_38 (*(ulonglong *)(frame + 72))
#define local_30 (*(ulonglong *)(frame + 80))
#define local_28 (*(ulonglong *)(frame + 88))
#define local_20 (*(undefined8 *)(frame + 96))
#define local_18 (*(ulonglong *)(frame + 104))
#define local_c (*(uint *)(frame + 116))
#define local_8 (*(ulonglong *)(frame + 120))
#define local_70 (*(ulonglong *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x4f90
 */

ulonglong FUN_00004f90(ulonglong param_1,uint param_2)

{
  unsigned char frame[160] = {0};

  ulonglong uVar1;

  local_20 = 0x800000000000;
  local_28 = param_1 >> 0x27 & 0x1ff;
  local_30 = param_1 >> 0x1e & 0x1ff;
  local_38 = param_1 >> 0x15 & 0x1ff;
  local_40 = 0x2f7000;
  local_68 = 0;
  local_70 = 0;
  if (((param_1 & 0x1fffff) == 0) && (param_1 < 0x800000000000)) {
    local_58 = *(ulonglong *)(local_28 * 8 + 0x2f7000);
    local_18 = param_1;
    local_c = param_2;
    if ((local_58 & 1) == 0) {
      uVar1 = FUN_00005850(&local_68);
      if ((longlong)uVar1 < 0) {
        return uVar1;
      }
      *(ulonglong *)(local_40 + local_28 * 8) = local_68 & 0xffffffffff000 | 3;
    }
    else {
      if ((local_58 & 0x80) != 0) {
        return 0x8000000000000001;
      }
      local_68 = local_58 & 0xffffffffff000;
    }
    local_48 = local_68;
    local_60 = *(ulonglong *)(local_68 + local_30 * 8);
    if ((local_60 & 1) == 0) {
      uVar1 = FUN_00005850(&local_70);
      if ((longlong)uVar1 < 0) {
        return uVar1;
      }
      *(ulonglong *)(local_48 + local_30 * 8) = local_70 & 0xffffffffff000 | 3;
    }
    else {
      if ((local_60 & 0x80) != 0) {
        return 0x8000000000000001;
      }
      local_70 = local_60 & 0xffffffffff000;
    }
    *(ulonglong *)(local_70 + local_38 * 8) = local_18 & 0xfffffffe00000 | 0x83 | (ulonglong)local_c
    ;
    local_8 = 0;
  }
  else {
    local_8 = 0x8000000000000001;
  }
  return local_8;
}

#undef local_68
#undef local_60
#undef local_58
#undef local_48
#undef local_40
#undef local_38
#undef local_30
#undef local_28
#undef local_20
#undef local_18
#undef local_c
#undef local_8
#undef local_70

#define local_38 (*(ulonglong *)(frame + 16))
#define local_8 (*(ulonglong *)(frame + 64))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x5220
 */

ulonglong FUN_00005220(ulonglong param_1,longlong param_2,uint param_3)

{
  unsigned char frame[104] = {0};

  ulonglong uVar1;
  ulonglong uVar2;

  if (((param_2 == 0) || (0x7fffffffffff < param_1)) || (param_1 + param_2 < param_1)) {
    local_8 = 0x8000000000000001;
  }
  else {
    local_38 = FUN_00004f30(param_1,0x200000);
    uVar1 = FUN_00004f60(param_1 + param_2,0x200000);
    if ((uVar1 < local_38) || (0x800000000000 < uVar1)) {
      local_8 = 0x8000000000000001;
    }
    else {
      for (; local_38 < uVar1; local_38 = local_38 + 0x200000) {
        uVar2 = FUN_00004f90(local_38,param_3);
        if ((longlong)uVar2 < 0) {
          return uVar2;
        }
      }
      local_8 = 0;
    }
  }
  return local_8;
}

#undef local_38
#undef local_8

#undef DAT_00009008
#define DAT_00009008 (*(uint8_t *)(((uintptr_t)efi_state + 0x8U)))
#undef DAT_0000b5b0
#define DAT_0000b5b0 (*(uint64_t *)(((uintptr_t)efi_state + 0x25b0U)))
#define local_38 (*(longlong *)(frame + 16))
#define local_30 (*(ulonglong *)(frame + 24))
#define local_28 (*(ulonglong *)(frame + 32))
#define local_20 (*(longlong *)(frame + 40))
#define local_18 (*(ulonglong *)(frame + 48))
#define local_10 (*(undefined8 * *)(frame + 56))
#define local_8 (*(ulonglong *)(frame + 64))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x5330
 */

ulonglong FUN_00005330(undefined8 *param_1)

{
  unsigned char frame[104] = {0};

  longlong lVar1;

  local_20 = 0;
  local_28 = 0;
  if (param_1 == (undefined8 *)0x0) {
    local_8 = 0x8000000000000001;
  }
  else {
    local_10 = param_1;
    FUN_00004b30((longlong)param_1,0x38);
    if (((DAT_0000b5b0 == 0) || (*(longlong *)(DAT_0000b5b0 + 0x138) == 0)) ||
       (*(longlong *)(DAT_0000b5b0 + 0x98) == 0)) {
      local_8 = 0x8000000000000001;
    }
    else {
      local_18 = (**(code **)(DAT_0000b5b0 + 0x138))(2,&DAT_00009008,0,&local_28,&local_20);
      if ((longlong)local_18 < 0) {
        local_8 = local_18;
      }
      else {
        for (local_30 = 0; local_30 < local_28; local_30 = local_30 + 1) {
          local_38 = 0;
          local_18 = (**(code **)(DAT_0000b5b0 + 0x98))
                               (*(undefined8 *)(local_20 + local_30 * 8),&DAT_00009008,&local_38);
          if (((((-1 < (longlong)local_18) && (local_38 != 0)) &&
               ((*(longlong *)(local_38 + 0x18) != 0 &&
                ((*(longlong *)(*(longlong *)(local_38 + 0x18) + 8) != 0 &&
                 (lVar1 = *(longlong *)(*(longlong *)(local_38 + 0x18) + 8),
                 *(uint *)(lVar1 + 0xc) < 3)))))) && (*(int *)(lVar1 + 4) != 0)) &&
             ((((*(int *)(lVar1 + 8) != 0 && (*(uint *)(lVar1 + 4) <= *(uint *)(lVar1 + 0x20))) &&
               (*(ulonglong *)(*(longlong *)(local_38 + 0x18) + 0x20) < 0x100000000)) &&
              (*(ulonglong *)(*(longlong *)(local_38 + 0x18) + 0x18) <=
               (ulonglong)
               (*(longlong *)(*(longlong *)(local_38 + 0x18) + 0x18) +
               *(longlong *)(*(longlong *)(local_38 + 0x18) + 0x20)))))) {
            *local_10 = *(undefined8 *)(*(longlong *)(local_38 + 0x18) + 0x18);
            *(int *)(local_10 + 1) = (int)*(undefined8 *)(*(longlong *)(local_38 + 0x18) + 0x20);
            *(int *)((longlong)local_10 + 0xc) = *(int *)(lVar1 + 0x20) << 2;
            *(undefined4 *)(local_10 + 2) = *(undefined4 *)(lVar1 + 4);
            *(undefined4 *)((longlong)local_10 + 0x14) = *(undefined4 *)(lVar1 + 8);
            *(undefined4 *)(local_10 + 3) = *(undefined4 *)(lVar1 + 0xc);
            FUN_00005640((longlong)local_10,lVar1);
            if (((*(int *)((longlong)local_10 + 0x1c) != 0) && (*(int *)(local_10 + 4) != 0)) &&
               (*(int *)((longlong)local_10 + 0x24) != 0)) {
              if (*(longlong *)(DAT_0000b5b0 + 0x48) != 0) {
                (**(code **)(DAT_0000b5b0 + 0x48))(local_20);
              }
              return 0;
            }
          }
        }
        if (*(longlong *)(DAT_0000b5b0 + 0x48) != 0) {
          (**(code **)(DAT_0000b5b0 + 0x48))(local_20);
        }
        local_8 = 0x800000000000000e;
      }
    }
  }
  return local_8;
}

#undef DAT_00009008
#undef DAT_0000b5b0
#undef local_38
#undef local_30
#undef local_28
#undef local_20
#undef local_18
#undef local_10
#undef local_8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x5640
 */

ulonglong FUN_00005640(longlong param_1,longlong param_2)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;

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
      uVar1 = FUN_000057d0(*(uint *)(param_1 + 0x1c));
      *(int *)(param_1 + 0x28) = (int)uVar1;
      uVar1 = FUN_000057d0(*(uint *)(param_1 + 0x20));
      *(int *)(param_1 + 0x2c) = (int)uVar1;
      uVar1 = FUN_000057d0(*(uint *)(param_1 + 0x24));
      *(int *)(param_1 + 0x30) = (int)uVar1;
      uVar1 = param_1;
    }
  }
  return uVar1;
}


#define local_c (*(uint *)(frame + 20))
#define local_8 (*(uint *)(frame + 24))
#define local_4 (*(uint *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x57d0
 */

ulonglong FUN_000057d0(uint param_1)

{
  unsigned char frame[64] = {0};


  local_c = 0;
  local_8 = param_1;
  if (param_1 == 0) {
    local_4 = 0;
  }
  else {
    for (; (local_8 & 1) == 0 && local_c < 0x1f; local_8 = local_8 >> 1) {
      local_c = local_c + 1;
    }
    local_4 = local_c;
  }
  return (ulonglong)local_4;
}

#undef local_c
#undef local_8
#undef local_4

#define local_14 (*(uint *)(frame + 16))
#define local_10 (*(ulonglong * *)(frame + 20))
#define local_8 (*(ulonglong *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x5850
 */

ulonglong FUN_00005850(ulonglong *param_1)

{
  unsigned char frame[68] = {0};


  local_14 = 0;
  if (param_1 == (ulonglong *)0x0) {
    local_8 = 0x8000000000000001;
  }
  else {
    local_10 = param_1;
    local_8 = FUN_00002e70(0,0x1000,&local_14);
    if (-1 < (longlong)local_8) {
      *local_10 = (ulonglong)local_14;
      local_8 = 0;
    }
  }
  return local_8;
}

#undef local_14
#undef local_10
#undef local_8

#undef DAT_0000b5b0
#define DAT_0000b5b0 (*(uint64_t *)(((uintptr_t)efi_state + 0x25b0U)))
#define local_40 (*(ulonglong *)(frame + 16))
#define local_28 (*(ulonglong *)(frame + 40))
#define local_20 (*(uint *)(frame + 48))
#define local_1c (*(int *)(frame + 52))
#define local_18 (*(undefined8 *)(frame + 56))
#define local_10 (*(undefined4 * *)(frame + 64))
#define local_8 (*(ulonglong *)(frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x58d0
 */

ulonglong FUN_000058d0(uint param_1,int param_2,undefined8 param_3,undefined4 *param_4)

{
  unsigned char frame[112] = {0};

  ulonglong uVar1;
  longlong lVar2;

  local_28 = (ulonglong)param_1;
  uVar1 = (ulonglong)(param_2 + 0xfffU >> 0xc);
  if ((((param_4 == (undefined4 *)0x0) || (uVar1 == 0)) || (DAT_0000b5b0 == 0)) ||
     (*(longlong *)(DAT_0000b5b0 + 0x28) == 0)) {
    local_8 = 0x8000000000000001;
  }
  else {
    local_20 = param_1;
    local_1c = param_2;
    local_18 = param_3;
    local_10 = param_4;
    if ((param_1 == 0) ||
       (lVar2 = (**(code **)(DAT_0000b5b0 + 0x28))(2,param_3,uVar1,&local_28), lVar2 < 0)) {
      local_28 = 0xffffffff;
      local_40 = (**(code **)(DAT_0000b5b0 + 0x28))(1,local_18,uVar1,&local_28);
      if (((longlong)local_40 < 0) || (0xffffffff < local_28)) {
        if (-1 < (longlong)local_40) {
          local_40 = 0x8000000000000001;
        }
        local_8 = local_40;
      }
      else {
        FUN_00004b30(local_28,uVar1 << 0xc);
        *local_10 = (int)local_28;
        local_8 = 0;
      }
    }
    else {
      FUN_00004b30(local_28,uVar1 << 0xc);
      *local_10 = (int)local_28;
      local_8 = 0;
    }
  }
  return local_8;
}

#undef DAT_0000b5b0
#undef local_40
#undef local_28
#undef local_20
#undef local_1c
#undef local_18
#undef local_10
#undef local_8

#define local_10 (*(ulonglong *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x5a50
 */

ulonglong FUN_00005a50(ulonglong param_1)

{
  unsigned char frame[64] = {0};


  local_10 = param_1 & 0xf;
  if (local_10 < 10) {
    local_10 = local_10 + 0x30;
  }
  else {
    local_10 = local_10 + 0x37;
  }
  return local_10;
}

#undef local_10

#undef DAT_0000b5f0
#define DAT_0000b5f0 (*(uint64_t *)(((uintptr_t)efi_state + 0x25f0U)))
#undef DAT_0000b600
#define DAT_0000b600 (*(uint8_t *)(((uintptr_t)efi_state + 0x2600U)))
#define local_10 (*(ulonglong *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x5aa0
 */

ulonglong FUN_00005aa0(longlong param_1)

{
  unsigned char frame[64] = {0};

  longlong lVar1;
  undefined *in_RAX;

  if ((param_1 != 0) && (DAT_0000b5f0 < 8)) {
    for (local_10 = 0; local_10 < DAT_0000b5f0; local_10 = local_10 + 1) {
      if (*(ulonglong *)(&DAT_0000b600 + local_10 * 8) == param_1) {
        return *(ulonglong *)(&DAT_0000b600 + local_10 * 8);
      }
    }
    in_RAX = &DAT_0000b600;
    lVar1 = DAT_0000b5f0 * 8;
    DAT_0000b5f0 = DAT_0000b5f0 + 1;
    *(longlong *)(&DAT_0000b600 + lVar1) = param_1;
  }
  return (ulonglong)in_RAX;
}

#undef DAT_0000b5f0
#undef DAT_0000b600
#undef local_10

#define auStack_408 (*(undefined4 (*)[120])(frame + 68))
#define auStack_1e0 (*(undefined4 (*)[2])(frame + 620))
#define local_43c (*(uint *)(frame + 16))
#define uStack_1d8 (*(undefined4 *)(frame + 628))
#define auStack_1d4 (*(undefined4 (*)[109])(frame + 632))
#define local_428 (*(undefined1 (*)[32])(frame + 36))
#define local_228 (*(undefined1 (*)[72])(frame + 548))
#define local_20 (*(longlong *)(frame + 1068))
#define local_18 (*(ulonglong * *)(frame + 1076))
#define local_10 (*(ulonglong * *)(frame + 1084))
#define local_8 (*(ulonglong *)(frame + 1092))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x5b30
 */

ulonglong FUN_00005b30(longlong param_1,ulonglong *param_2,ulonglong *param_3)

{
  unsigned char frame[1132] = {0};

  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;

  if ((param_2 == (ulonglong *)0x0) || (param_3 == (ulonglong *)0x0)) {
    local_8 = 0x8000000000000001;
  }
  else {
    *param_2 = 0;
    *param_3 = 0;
    if (((param_1 == 0) || (*(longlong *)(param_1 + 8) == 0)) ||
       (*(ulonglong *)(*(longlong *)(param_1 + 8) + 0x18) < 2)) {
      local_8 = 0x8000000000000001;
    }
    else {
      local_20 = param_1;
      local_18 = param_2;
      local_10 = param_3;
      uVar1 = FUN_00005fb0(param_1,1,local_228);
      if (((longlong)uVar1 < 0) ||
         (uVar1 = FUN_00006060((longlong)local_228,(uintptr_t)(efi_state+0x1740),8), (int)uVar1 == 0)) {
        local_8 = 0x800000000000000e;
      }
      else {
        uVar1 = FUN_000060d0(auStack_1e0);
        uVar2 = FUN_00006110(&uStack_1d8);
        uVar3 = FUN_00006110(auStack_1d4);
        if ((((uint)uVar3 < 0x80) || (0x200 < (uint)uVar3)) || (0x400 < (uint)uVar2)) {
          local_8 = 0x8000000000000001;
        }
        else {
          for (local_43c = 0; local_43c < (uint)uVar2; local_43c = local_43c + 1) {
            uVar4 = (ulonglong)local_43c * (uVar3 & 0xffffffff);
            uVar5 = uVar4 & 0x1ff;
            if (0x200 < uVar5 + (uVar3 & 0xffffffff)) {
              return 0x8000000000000003;
            }
            uVar4 = FUN_00005fb0(local_20,uVar1 + (uVar4 >> 9),local_428);
            if ((longlong)uVar4 < 0) {
              return 0x8000000000000001;
            }
            uVar4 = FUN_00006060((longlong)(local_428 + uVar5),(uintptr_t)(efi_state+0x1240),0x10);
            if (((int)uVar4 != 0) ||
               (uVar4 = FUN_00006150((longlong)(local_428 + uVar5),(uintptr_t)(efi_state+0x1749)), (char)uVar4 != '\0')) {
              uVar4 = FUN_000060d0((undefined4 *)((longlong)auStack_408 + uVar5));
              uVar5 = FUN_000060d0((undefined4 *)((longlong)auStack_408 + uVar5 + 8));
              if ((uVar5 < uVar4) ||
                 ((*(ulonglong *)(*(longlong *)(local_20 + 8) + 0x18) < uVar5 ||
                  (0xffffffff < uVar4)))) {
                return 0x8000000000000001;
              }
              uVar5 = (uVar5 - uVar4) + 1;
              uVar6 = FUN_00005ea0(local_20,uVar4,uVar5);
              if ((char)uVar6 != '\0') {
                *local_18 = uVar4;
                *local_10 = uVar5;
                return 0;
              }
            }
          }
          local_8 = 0x800000000000000e;
        }
      }
    }
  }
  return local_8;
}

#undef auStack_408
#undef auStack_1e0
#undef local_43c
#undef uStack_1d8
#undef auStack_1d4
#undef local_428
#undef local_228
#undef local_20
#undef local_18
#undef local_10
#undef local_8

#define local_18 (*(longlong *)(frame + 553))
#define auStack_224 (*(undefined2 (*)[258])(frame + 29))
#define local_10 (*(ulonglong *)(frame + 561))
#define local_1 (*(bool *)(frame + 576))
#define local_231 (*(bool *)(frame + 16))
#define local_228 (*(undefined4 *)(frame + 25))
#define local_20 (*(longlong *)(frame + 545))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x5ea0
 */

ulonglong FUN_00005ea0(longlong param_1,longlong param_2,ulonglong param_3)

{
  unsigned char frame[609] = {0};

  ulonglong in_RAX;
  ulonglong uVar1;

  if ((((param_1 == 0) || (in_RAX = param_1, *(longlong *)(param_1 + 8) == 0)) ||
      (in_RAX = *(ulonglong *)(param_1 + 8), *(int *)(in_RAX + 0xc) != 0x200)) ||
     ((param_3 < 0x42 ||
      (in_RAX = param_2 + 0x41, *(ulonglong *)(*(longlong *)(param_1 + 8) + 0x18) < in_RAX)))) {
    local_1 = false;
  }
  else {
    local_20 = param_1;
    local_18 = param_2;
    local_10 = param_3;
    in_RAX = FUN_00005fb0(param_1,param_2 + 0x41,&local_228);
    if ((longlong)in_RAX < 0) {
      local_1 = false;
    }
    else {
      uVar1 = FUN_00006110(&local_228);
      local_231 = false;
      if ((int)uVar1 == 0x54504257) {
        uVar1 = FUN_00006200(auStack_224);
        local_231 = ((uint)uVar1 & 0xffff) == 1;
      }
      in_RAX = 0;
      local_1 = local_231;
    }
  }
  return CONCAT71((int7)(in_RAX >> 8),local_1);
}

#undef local_18
#undef auStack_224
#undef local_10
#undef local_1
#undef local_231
#undef local_228
#undef local_20

#define local_8 (*(ulonglong *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x5fb0
 */

ulonglong FUN_00005fb0(longlong param_1,ulonglong param_2,undefined8 param_3)

{
  unsigned char frame[64] = {0};


  if ((((param_1 == 0) || (*(longlong *)(param_1 + 8) == 0)) || (*(longlong *)(param_1 + 0x18) == 0)
      ) || ((*(int *)(*(longlong *)(param_1 + 8) + 0xc) != 0x200 ||
            (*(ulonglong *)(*(longlong *)(param_1 + 8) + 0x18) < param_2)))) {
    local_8 = 0x8000000000000001;
  }
  else {
    local_8 = (**(code **)(param_1 + 0x18))
                        (param_1,**(undefined4 **)(param_1 + 8),param_2,0x200,param_3);
  }
  return local_8;
}

#undef local_8

#define local_28 (*(ulonglong *)(frame + 16))
#define local_4 (*(uint *)(frame + 52))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x6060
 */

ulonglong FUN_00006060(longlong param_1,longlong param_2,ulonglong param_3)

{
  unsigned char frame[88] = {0};


  local_28 = 0;
  do {
    if (param_3 <= local_28) {
      local_4 = 1;
LAB_000060c6:
      return (ulonglong)local_4;
    }
    if (*(char *)(param_1 + local_28) != *(char *)(param_2 + local_28)) {
      local_4 = 0;
      goto LAB_000060c6;
    }
    local_28 = local_28 + 1;
  } while( true );
}

#undef local_28
#undef local_4

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x60d0
 */

ulonglong FUN_000060d0(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;
  ulonglong uVar2;

  uVar1 = FUN_00006110(param_1);
  uVar2 = FUN_00006110(param_1 + 1);
  return uVar1 & 0xffffffff | uVar2 << 0x20;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x6110
 */

ulonglong FUN_00006110(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  return (ulonglong)(uint)*param_1;
}


#define local_20 (*(ulonglong *)(frame + 16))
#define local_1 (*(bool *)(frame + 47))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x6150
 */

ulonglong FUN_00006150(longlong param_1,longlong param_2)

{
  unsigned char frame[80] = {0};

  ulonglong in_RAX;
  ulonglong uVar1;

  local_20 = 0;
  do {
    if (0x23 < local_20) {
      local_1 = true;
LAB_000061eb:
      return CONCAT71((int7)(in_RAX >> 8),local_1);
    }
    uVar1 = FUN_00006200((undefined2 *)(param_1 + 0x38 + local_20 * 2));
    if (*(char *)(param_2 + local_20) == '\0') {
      local_1 = (ushort)uVar1 == 0;
      in_RAX = 0;
      goto LAB_000061eb;
    }
    in_RAX = uVar1 & 0xffff;
    if ((ushort)uVar1 != (ushort)*(byte *)(param_2 + local_20)) {
      local_1 = false;
      goto LAB_000061eb;
    }
    in_RAX = local_20 + 1;
    local_20 = in_RAX;
  } while( true );
}

#undef local_20
#undef local_1

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x6200
 */

ulonglong FUN_00006200(undefined2 *param_1)

{
  unsigned char frame[64] = {0};

  return (ulonglong)(ushort)*param_1;
}


#undef DAT_0000b5d8
#define DAT_0000b5d8 (*(uint64_t *)(((uintptr_t)efi_state + 0x25d8U)))
#define local_8 (*(ulonglong *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x6230
 */

ulonglong FUN_00006230(longlong param_1,ulonglong param_2,undefined8 param_3)

{
  unsigned char frame[64] = {0};


  if (-DAT_0000b5d8 - 1U < param_2) {
    local_8 = 0x8000000000000001;
  }
  else {
    local_8 = FUN_00005fb0(param_1,DAT_0000b5d8 + param_2,param_3);
  }
  return local_8;
}

#undef DAT_0000b5d8
#undef local_8

#define local_19 (*(bool *)(frame + 16))
#define local_1 (*(bool *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x62a0
 */

ulonglong FUN_000062a0(undefined4 *param_1,uint *param_2)

{
  unsigned char frame[73] = {0};

  ulonglong in_RAX;
  ulonglong uVar1;

  if ((param_1 != (undefined4 *)0x0) && (param_2 != (uint *)0x0)) {
    in_RAX = FUN_00006110(param_1);
    if ((int)in_RAX == 1) {
      uVar1 = FUN_00006110(param_1 + 1);
      *param_2 = (uint)uVar1;
      uVar1 = FUN_00006110(param_1 + 2);
      param_2[1] = (uint)uVar1;
      uVar1 = FUN_00006110(param_1 + 3);
      param_2[2] = (uint)uVar1;
      local_19 = false;
      if (0x41 < *param_2) {
        local_19 = param_2[1] != 0;
      }
      in_RAX = 0;
      local_1 = local_19;
      goto LAB_00006348;
    }
  }
  local_1 = false;
LAB_00006348:
  return CONCAT71((int7)(in_RAX >> 8),local_1);
}

#undef local_19
#undef local_1

#undef DAT_0000b5b0
#define DAT_0000b5b0 (*(uint64_t *)(((uintptr_t)efi_state + 0x25b0U)))
#undef DAT_02000000
#define DAT_02000000 (*(uint8_t *)(0x2000000U))
#undef DAT_02000010
#define DAT_02000010 (*(uint8_t *)(0x2000010U))
#undef _DAT_02000000
#define _DAT_02000000 (*(int *)(0x2000000U))
#undef _DAT_02000010
#define _DAT_02000010 (*(uint32_t *)(0x2000010U))
#define local_1a4 (*(uint *)(frame + 148))
#define local_198 (*(longlong *)(frame + 160))
#define local_17c (*(uint *)(frame + 188))
#define local_178 (*(longlong *)(frame + 192))
#define local_170 (*(ulonglong *)(frame + 200))
#define local_168 (*(ulonglong *)(frame + 208))
#define local_12c (*(uint *)(frame + 268))
#define local_128 (*(uint *)(frame + 272))
#define local_124 (*(uint *)(frame + 276))
#define local_110 (*(longlong *)(frame + 296))
#define local_108 (*(byte * *)(frame + 304))
#define local_100 (*(byte * *)(frame + 312))
#define local_f8 (*(byte * *)(frame + 320))
#define local_f0 (*(ulonglong *)(frame + 328))
#define local_e8 (*(uint (*)[35])(frame + 336))
#define local_5c (*(uint *)(frame + 476))
#define local_58 (*(uint *)(frame + 480))
#define local_50 (*(undefined4 (*)[10])(frame + 488))
#define local_28 (*(longlong *)(frame + 528))
#define local_20 (*(uint * *)(frame + 536))
#define local_14 (*(undefined4 *)(frame + 548))
#define local_10 (*(uint * *)(frame + 552))
#define local_8 (*(ulonglong *)(frame + 560))
#define local_228 (*(ulonglong *)(frame + 16))
#define local_218 (*(ulonglong *)(frame + 32))
#define local_1f0 (*(longlong *)(frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x6360
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_00006360(longlong param_1,uint *param_2,undefined4 param_3,uint *param_4)

{
  unsigned char frame[600] = {0};

  int iVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  byte *pbVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint *puVar12;

  local_f0 = 0;
  local_f8 = (byte *)0x0;
  local_100 = (byte *)0x0;
  local_108 = (byte *)0x1ffffff;
  local_110 = 0x2000000;
  local_128 = 0x2000000;
  local_12c = 0;
  if (((param_4 == (uint *)0x0) || (DAT_0000b5b0 == 0)) || (*(longlong *)(DAT_0000b5b0 + 0x28) == 0)
     ) {
    local_8 = 0x8000000000000001;
  }
  else {
    *param_4 = 0;
    local_28 = param_1;
    local_20 = param_2;
    local_14 = param_3;
    local_10 = param_4;
    uVar4 = FUN_00007100(param_1,*param_2,local_50);
    if ((longlong)uVar4 < 0) {
      FUN_00001bd0(L"  payload geometry failed\r\n");
      local_8 = uVar4;
    }
    else {
      uVar4 = FUN_00007340(local_28,*local_20,(longlong)local_50,"Permafrost",&local_5c);
      if ((longlong)uVar4 < 0) {
        FUN_00001bd0(L"  payload file lookup failed\r\n");
        local_8 = uVar4;
      }
      else {
        uVar4 = (ulonglong)(local_58 + 0xfff >> 0xc);
        if (uVar4 == 0) {
          FUN_00001bd0(L"  payload file is empty\r\n");
          local_8 = 0x8000000000000001;
        }
        else {
          uVar5 = (**(code **)(DAT_0000b5b0 + 0x28))(1,2,uVar4,&local_108);
          if ((longlong)uVar5 < 0) {
            FUN_00001bd0(L"  payload file buffer allocation failed\r\n");
            local_8 = uVar5;
          }
          else {
            local_f8 = local_108;
            FUN_00004b30((longlong)local_108,uVar4 << 0xc);
            uVar4 = FUN_000075d0(local_28,*local_20,(longlong)local_50,&local_5c,(longlong)local_f8)
            ;
            if ((longlong)uVar4 < 0) {
              FUN_00001bd0(L"  payload disk read failed\r\n");
              local_8 = uVar4;
            }
            else {
              local_100 = local_f8;
              local_124 = local_58;
              if (7 < local_58) {
                uVar4 = FUN_00007960(local_f8);
                iVar1 = (int)uVar4;
                if ((iVar1 == -0x35014542) || (iVar1 == -0x35014541)) {
                  uVar4 = FUN_00007960(local_f8 + 4);
                  uVar2 = (uint)uVar4;
                  uVar3 = 0x14;
                  if (iVar1 == -0x35014541) {
                    uVar3 = 0x20;
                  }
                  local_168 = 0;
                  local_170 = 0;
                  local_178 = 8;
                  if (((uVar2 == 0) || (0x40 < uVar2)) ||
                     ((ulonglong)local_58 < (uVar4 & 0xffffffff) * (ulonglong)uVar3 + 8)) {
                    FUN_00001bd0(L"  payload fat Mach-O header failed\r\n");
                    return 0x8000000000000001;
                  }
                  for (local_17c = 0; local_17c < uVar2; local_17c = local_17c + 1) {
                    pbVar6 = local_f8 + local_178;
                    uVar4 = FUN_00007960(pbVar6);
                    if ((int)uVar4 == 0x1000007) {
                      if (iVar1 == -0x35014541) {
                        local_168 = FUN_000079a0(pbVar6 + 8);
                        local_170 = FUN_000079a0(pbVar6 + 0x10);
                      }
                      else {
                        local_168 = FUN_00007960(pbVar6 + 8);
                        local_168 = local_168 & 0xffffffff;
                        local_170 = FUN_00007960(pbVar6 + 0xc);
                        local_170 = local_170 & 0xffffffff;
                      }
                      break;
                    }
                    local_178 = (ulonglong)uVar3 + local_178;
                  }
                  if ((((local_170 == 0) || (local_58 < local_168)) ||
                      (local_58 - local_168 < local_170)) || (0xffffffff < local_170)) {
                    FUN_00001bd0(L"  payload fat Mach-O slice failed\r\n");
                    return 0x8000000000000001;
                  }
                  local_100 = local_f8 + local_168;
                  local_124 = (uint)local_170;
                }
              }
              if (((local_124 < 0x20) ||
                  (uVar4 = FUN_00006110((undefined4 *)local_100), (int)uVar4 != -0x1120531)) ||
                 (uVar4 = FUN_00006110((undefined4 *)(local_100 + 4)), (int)uVar4 != 0x1000007)) {
                FUN_00001bd0(L"  payload Mach-O header failed\r\n");
                local_8 = 0x8000000000000001;
              }
              else {
                uVar4 = FUN_00006110((undefined4 *)(local_100 + 0x10));
                uVar5 = FUN_00006110((undefined4 *)(local_100 + 0x14));
                local_198 = 0x20;
                if (((uint)uVar4 < 0x41) && ((uVar5 & 0xffffffff) + 0x20 <= (ulonglong)local_124)) {
                  uVar5 = (uVar5 & 0xffffffff) + 0x20;
                  for (local_1a4 = 0; local_1a4 < (uint)uVar4; local_1a4 = local_1a4 + 1) {
                    if (uVar5 < local_198 + 8U) {
                      FUN_00001bd0(L"  payload Mach-O command truncated\r\n");
                      return 0x8000000000000001;
                    }
                    pbVar6 = local_100 + local_198;
                    uVar7 = FUN_00006110((undefined4 *)pbVar6);
                    iVar1 = (int)uVar7;
                    uVar7 = FUN_00006110((undefined4 *)(pbVar6 + 4));
                    if (((uint)uVar7 < 8) || (uVar5 - local_198 < (uVar7 & 0xffffffff))) {
                      FUN_00001bd0(L"  payload Mach-O command size failed\r\n");
                      return 0x8000000000000001;
                    }
                    if ((iVar1 == 1) || (iVar1 == 0x19)) {
                      if ((iVar1 != 0x19) || (((uint)uVar7 < 0x48 || (7 < local_f0)))) {
                        FUN_00001bd0(L"  payload Mach-O segment failed\r\n");
                        return 0x8000000000000001;
                      }
                      uVar8 = FUN_000060d0((undefined4 *)(pbVar6 + 0x18));
                      uVar9 = FUN_000060d0((undefined4 *)(pbVar6 + 0x20));
                      uVar10 = FUN_000060d0((undefined4 *)(pbVar6 + 0x28));
                      uVar11 = FUN_000060d0((undefined4 *)(pbVar6 + 0x30));
                      if ((((0xffffffff < uVar8) || (0xffffffff < uVar9)) || (0xffffffff < uVar10))
                         || (0xffffffff < uVar11)) {
                        FUN_00001bd0(L"  payload Mach-O segment range failed\r\n");
                        return 0x8000000000000001;
                      }
                      puVar12 = local_e8 + local_f0 * 4;
                      *puVar12 = (uint)uVar8;
                      local_e8[local_f0 * 4 + 1] = (uint)uVar9;
                      local_e8[local_f0 * 4 + 2] = (uint)uVar10;
                      local_e8[local_f0 * 4 + 3] = (uint)uVar11;
                      if (((local_e8[local_f0 * 4 + 1] < local_e8[local_f0 * 4 + 3]) ||
                          (*puVar12 < 0x2000000)) || (-*puVar12 - 1 < local_e8[local_f0 * 4 + 1])) {
                        FUN_00001bd0(L"  payload Mach-O segment range failed\r\n");
                        return 0x8000000000000001;
                      }
                      if (local_e8[local_f0 * 4 + 3] != 0) {
                        if (-local_e8[local_f0 * 4 + 2] - 1 < local_e8[local_f0 * 4 + 3]) {
                          FUN_00001bd0(L"  payload Mach-O file range failed\r\n");
                          return 0x8000000000000001;
                        }
                        if (local_124 < local_e8[local_f0 * 4 + 2] + local_e8[local_f0 * 4 + 3]) {
                          FUN_00001bd0(L"  payload Mach-O segment extends past file\r\n");
                          return 0x8000000000000001;
                        }
                      }
                      if (local_128 < *puVar12 + local_e8[local_f0 * 4 + 1]) {
                        local_128 = *puVar12 + local_e8[local_f0 * 4 + 1];
                      }
                      local_f0 = local_f0 + 1;
                    }
                    else if ((iVar1 == 5) || (iVar1 == 4)) {
                      uVar8 = local_198 + (uVar7 & 0xffffffff);
                      for (local_1f0 = local_198 + 8; local_1f0 + 8U <= uVar8;
                          local_1f0 = uVar11 + 8 + local_1f0) {
                        uVar9 = FUN_00006110((undefined4 *)(local_100 + local_1f0));
                        uVar10 = FUN_00006110((undefined4 *)(local_100 + local_1f0 + 4));
                        uVar11 = (uVar10 & 0xffffffff) * 4;
                        if ((uVar8 - local_1f0) - 8 < uVar11) {
                          FUN_00001bd0(L"  payload Mach-O thread state failed\r\n");
                          return 0x8000000000000001;
                        }
                        if (((int)uVar9 == 4) && (0x29 < (uint)uVar10)) {
                          uVar9 = FUN_000060d0((undefined4 *)(local_100 + local_1f0 + 0x88));
                          if (0xffffffff < uVar9) {
                            FUN_00001bd0(L"  payload Mach-O entry failed\r\n");
                            return 0x8000000000000001;
                          }
                          local_12c = (uint)uVar9;
                        }
                      }
                    }
                    local_198 = (uVar7 & 0xffffffff) + local_198;
                  }
                  if (((local_f0 == 0) || (local_12c < 0x2000000)) || (local_128 <= local_12c)) {
                    FUN_00001bd0(L"  payload Mach-O entry failed\r\n");
                    local_8 = 0x8000000000000001;
                  }
                  else {
                    uVar4 = (ulonglong)(local_128 + 0xfe000000) + 0xfff >> 0xc;
                    local_228 = (**(code **)(DAT_0000b5b0 + 0x28))(2,1,uVar4,&local_110);
                    if (((longlong)local_228 < 0) || (local_110 != 0x2000000)) {
                      FUN_00001bd0(L"  payload fixed-address allocation failed\r\n");
                      if (-1 < (longlong)local_228) {
                        local_228 = 0x8000000000000001;
                      }
                      local_8 = local_228;
                    }
                    else {
                      FUN_00004b30(0x2000000,uVar4 << 0xc);
                      for (local_218 = 0; local_218 < local_f0; local_218 = local_218 + 1) {
                        if (local_e8[local_218 * 4 + 3] != 0) {
                          FUN_000079e0((ulonglong)local_e8[local_218 * 4],
                                       (longlong)(local_100 + local_e8[local_218 * 4 + 2]),
                                       (ulonglong)local_e8[local_218 * 4 + 3]);
                        }
                      }
                      if (_DAT_02000000 == 0x504c4d57) {
                        _DAT_02000010 = local_14;
                      }
                      *local_10 = local_12c;
                      local_8 = 0;
                    }
                  }
                }
                else {
                  FUN_00001bd0(L"  payload Mach-O command table failed\r\n");
                  local_8 = 0x8000000000000001;
                }
              }
            }
          }
        }
      }
    }
  }
  return local_8;
}

#undef DAT_0000b5b0
#undef DAT_02000000
#undef DAT_02000010
#undef _DAT_02000000
#undef _DAT_02000010
#undef local_1a4
#undef local_198
#undef local_17c
#undef local_178
#undef local_170
#undef local_168
#undef local_12c
#undef local_128
#undef local_124
#undef local_110
#undef local_108
#undef local_100
#undef local_f8
#undef local_f0
#undef local_e8
#undef local_5c
#undef local_58
#undef local_50
#undef local_28
#undef local_20
#undef local_14
#undef local_10
#undef local_8
#undef local_228
#undef local_218
#undef local_1f0

#define uStack_224 (*(undefined4 *)(frame + 20))
#define uStack_220 (*(undefined4 *)(frame + 24))
#define uStack_21c (*(undefined4 *)(frame + 28))
#define uStack_218 (*(undefined4 *)(frame + 32))
#define uStack_214 (*(undefined4 *)(frame + 36))
#define uStack_210 (*(undefined4 *)(frame + 40))
#define uStack_20c (*(undefined4 *)(frame + 44))
#define uStack_208 (*(undefined4 *)(frame + 48))
#define uStack_204 (*(undefined4 *)(frame + 52))
#define uStack_200 (*(undefined4 *)(frame + 56))
#define auStack_1fc (*(undefined4 (*)[119])(frame + 60))
#define local_228 (*(undefined4 *)(frame + 16))
#define local_20 (*(longlong *)(frame + 536))
#define local_14 (*(uint *)(frame + 548))
#define local_10 (*(undefined4 * *)(frame + 552))
#define local_8 (*(ulonglong *)(frame + 560))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x7100
 */

ulonglong FUN_00007100(longlong param_1,uint param_2,undefined4 *param_3)

{
  unsigned char frame[600] = {0};

  ulonglong uVar1;

  if (param_3 == (undefined4 *)0x0) {
    local_8 = 0x8000000000000001;
  }
  else {
    local_20 = param_1;
    local_14 = param_2;
    local_10 = param_3;
    local_8 = FUN_00006230(param_1,(ulonglong)param_2,&local_228);
    if (-1 < (longlong)local_8) {
      uVar1 = FUN_00006110(&local_228);
      if (((((int)uVar1 == 0x53464d57) && (uVar1 = FUN_00006110(&uStack_224), (int)uVar1 == 0x3233))
          && (uVar1 = FUN_00006110(&uStack_220), (int)uVar1 == 1)) &&
         (uVar1 = FUN_00006110(&uStack_21c), (int)uVar1 == 0x200)) {
        uVar1 = FUN_00006110(&uStack_220);
        *local_10 = (int)uVar1;
        uVar1 = FUN_00006110(&uStack_21c);
        local_10[1] = (int)uVar1;
        uVar1 = FUN_00006110(&uStack_218);
        local_10[2] = (int)uVar1;
        uVar1 = FUN_00006110(&uStack_214);
        local_10[3] = (int)uVar1;
        uVar1 = FUN_00006110(&uStack_210);
        local_10[4] = (int)uVar1;
        uVar1 = FUN_00006110(&uStack_20c);
        local_10[5] = (int)uVar1;
        uVar1 = FUN_00006110(&uStack_208);
        local_10[6] = (int)uVar1;
        uVar1 = FUN_00006110(&uStack_204);
        local_10[7] = (int)uVar1;
        uVar1 = FUN_00006110(&uStack_200);
        local_10[8] = (int)uVar1;
        uVar1 = FUN_00006110(auStack_1fc);
        local_10[9] = (int)uVar1;
        if ((local_10[2] == 0) || (0x100 < (uint)local_10[9])) {
          return 0x8000000000000001;
        }
        return 0;
      }
      local_8 = 0x8000000000000001;
    }
  }
  return local_8;
}

#undef uStack_224
#undef uStack_220
#undef uStack_21c
#undef uStack_218
#undef uStack_214
#undef uStack_210
#undef uStack_20c
#undef uStack_208
#undef uStack_204
#undef uStack_200
#undef auStack_1fc
#undef local_228
#undef local_20
#undef local_14
#undef local_10
#undef local_8

#define local_338 (*(char (*)[240])(frame + 16))
#define local_248 (*(undefined1 *)(frame + 256))
#define local_240 (*(longlong *)(frame + 264))
#define local_238 (*(ulonglong *)(frame + 272))
#define local_230 (*(uint *)(frame + 280))
#define local_22c (*(uint *)(frame + 284))
#define local_228 (*(undefined1 (*)[240])(frame + 288))
#define local_28 (*(longlong *)(frame + 800))
#define local_1c (*(int *)(frame + 812))
#define local_18 (*(longlong *)(frame + 816))
#define local_10 (*(char * *)(frame + 824))
#define local_8 (*(ulonglong *)(frame + 832))
#define auStack_138 (*(undefined4 (*)[68])(frame + 528))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x7340
 */

ulonglong FUN_00007340(longlong param_1,int param_2,longlong param_3,char *param_4,
                      undefined4 *param_5)

{
  unsigned char frame[872] = {0};

  ulonglong uVar1;
  bool bVar2;

  local_22c = 0;
  if (((param_3 == 0) || (param_4 == (char *)0x0)) || (param_5 == (undefined4 *)0x0)) {
    local_8 = 0x8000000000000001;
  }
  else {
    local_28 = param_1;
    local_1c = param_2;
    local_18 = param_3;
    local_10 = param_4;
    FUN_00004b30((longlong)param_5,0xc);
    for (local_230 = 0; local_230 < *(uint *)(local_18 + 0x18); local_230 = local_230 + 1) {
      local_238 = FUN_00006230(local_28,(ulonglong)
                                        (local_1c + *(int *)(local_18 + 0x14) + local_230),local_228
                              );
      if ((longlong)local_238 < 0) {
        return local_238;
      }
      local_240 = 0;
      while( true ) {
        bVar2 = false;
        if (local_240 + 0x100U < 0x201) {
          bVar2 = local_22c < *(uint *)(local_18 + 0x24);
        }
        if (!bVar2) break;
        FUN_000079e0((longlong)local_338,(longlong)(local_228 + local_240),0xf0);
        local_248 = 0;
        uVar1 = FUN_00007a50(local_338,local_10);
        if ((int)uVar1 != 0) {
          uVar1 = FUN_00006110((undefined4 *)((longlong)auStack_138 + local_240));
          *param_5 = (int)uVar1;
          uVar1 = FUN_00006110((undefined4 *)((longlong)auStack_138 + local_240 + 4));
          param_5[1] = (int)uVar1;
          uVar1 = FUN_00006110((undefined4 *)((longlong)auStack_138 + local_240 + 8));
          param_5[2] = (int)uVar1;
          return 0;
        }
        local_22c = local_22c + 1;
        local_240 = local_240 + 0x100;
      }
    }
    local_8 = 0x800000000000000e;
  }
  return local_8;
}

#undef local_338
#undef local_248
#undef local_240
#undef local_238
#undef local_230
#undef local_22c
#undef local_228
#undef local_28
#undef local_1c
#undef local_18
#undef local_10
#undef local_8
#undef auStack_138

#define local_278 (*(uint *)(frame + 16))
#define local_274 (*(uint *)(frame + 20))
#define local_270 (*(ulonglong *)(frame + 24))
#define local_268 (*(ulonglong *)(frame + 32))
#define local_260 (*(ulonglong *)(frame + 40))
#define local_258 (*(ulonglong *)(frame + 48))
#define local_24d (*(char *)(frame + 59))
#define local_24c (*(uint *)(frame + 60))
#define local_248 (*(undefined1 (*)[520])(frame + 64))
#define local_40 (*(longlong *)(frame + 584))
#define local_38 (*(uint *)(frame + 592))
#define local_34 (*(uint *)(frame + 596))
#define local_30 (*(longlong *)(frame + 600))
#define local_24 (*(int *)(frame + 612))
#define local_20 (*(longlong *)(frame + 616))
#define local_18 (*(uint * *)(frame + 624))
#define local_10 (*(ulonglong *)(frame + 632))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x75d0
 */

ulonglong FUN_000075d0(longlong param_1,int param_2,longlong param_3,uint *param_4,longlong param_5)

{
  unsigned char frame[680] = {0};

  ulonglong uVar1;

  local_40 = param_5;
  local_24c = 0;
  local_24d = '\0';
  if (((param_3 == 0) || (param_4 == (uint *)0x0)) || (param_5 == 0)) {
    local_10 = 0x8000000000000001;
  }
  else {
    local_34 = *param_4;
    local_30 = param_1;
    local_24 = param_2;
    local_20 = param_3;
    local_18 = param_4;
    for (local_38 = param_4[1]; local_38 != 0; local_38 = local_38 - (int)local_268) {
      local_260 = (ulonglong)*(uint *)(local_20 + 8) << 9;
      local_268 = (ulonglong)local_38;
      local_274 = local_34;
      local_278 = 0;
      if ((((ulonglong)*(uint *)(local_20 + 8) == 0) || (local_34 < 2)) ||
         (local_258 = local_260, *(int *)(local_20 + 0x20) + 2U <= local_34)) {
        return 0x8000000000000001;
      }
      for (; local_260 < local_268; local_260 = local_258 + local_260) {
        uVar1 = FUN_00007b60(local_30,local_24,local_20,(longlong)local_248,&local_24c,&local_24d,
                             local_274,&local_278);
        if ((longlong)uVar1 < 0) {
          return uVar1;
        }
        if (((local_278 != local_274 + 1) || (local_278 < 2)) ||
           ((*(int *)(local_20 + 0x20) + 2U <= local_278 || (-local_260 - 1 < local_258)))) break;
        local_274 = local_278;
      }
      if (local_260 < local_268) {
        local_268 = local_260;
      }
      local_270 = local_268 + 0x1ff >> 9;
      uVar1 = FUN_00007cc0(local_30,(ulonglong)(uint)(local_24 + *(int *)(local_20 + 0x1c)) +
                                    (ulonglong)(local_34 - 2) * (ulonglong)*(uint *)(local_20 + 8),
                           local_270,local_40);
      if ((longlong)uVar1 < 0) {
        return uVar1;
      }
      if (local_38 <= local_268) break;
      uVar1 = FUN_00007b60(local_30,local_24,local_20,(longlong)local_248,&local_24c,&local_24d,
                           local_274,&local_278);
      if (((longlong)uVar1 < 0) || (local_278 == 0xffffffff)) {
        return 0x8000000000000001;
      }
      local_40 = local_268 + local_40;
      local_34 = local_278;
    }
    local_10 = 0;
  }
  return local_10;
}

#undef local_278
#undef local_274
#undef local_270
#undef local_268
#undef local_260
#undef local_258
#undef local_24d
#undef local_24c
#undef local_248
#undef local_40
#undef local_38
#undef local_34
#undef local_30
#undef local_24
#undef local_20
#undef local_18
#undef local_10

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x7960
 */

ulonglong FUN_00007960(byte *param_1)

{
  unsigned char frame[64] = {0};

  return (ulonglong)
         ((uint)*param_1 << 0x18 | (uint)param_1[1] << 0x10 | (uint)param_1[2] << 8 |
         (uint)param_1[3]);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x79a0
 */

ulonglong FUN_000079a0(byte *param_1)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;
  ulonglong uVar2;

  uVar1 = FUN_00007960(param_1);
  uVar2 = FUN_00007960(param_1 + 4);
  return uVar1 << 0x20 | uVar2 & 0xffffffff;
}


#define local_30 (*(ulonglong *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x79e0
 */

ulonglong FUN_000079e0(longlong param_1,longlong param_2,ulonglong param_3)

{
  unsigned char frame[96] = {0};


  for (local_30 = 0; local_30 < param_3; local_30 = local_30 + 1) {
    *(undefined1 *)(param_1 + local_30) = *(undefined1 *)(param_2 + local_30);
  }
  return local_30;
}

#undef local_30

#define local_22 (*(bool *)(frame + 16))
#define local_20 (*(longlong *)(frame + 18))
#define local_18 (*(char * *)(frame + 26))
#define local_10 (*(char * *)(frame + 34))
#define local_4 (*(uint *)(frame + 46))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x7a50
 */

ulonglong FUN_00007a50(char *param_1,char *param_2)

{
  unsigned char frame[82] = {0};

  bool bVar1;

  local_20 = 0;
  local_18 = param_1;
  if (*param_1 == '/') {
    local_18 = param_1 + 1;
  }
  local_10 = param_2;
  if (*param_2 == '/') {
    local_10 = param_2 + 1;
  }
  while( true ) {
    bVar1 = false;
    if (local_18[local_20] != '\0') {
      bVar1 = local_10[local_20] != '\0';
    }
    if (!bVar1) break;
    if (local_18[local_20] != local_10[local_20]) {
      local_4 = 0;
LAB_00007b52:
      return (ulonglong)local_4;
    }
    local_20 = local_20 + 1;
  }
  local_22 = false;
  if (local_18[local_20] == '\0') {
    local_22 = local_10[local_20] == '\0';
  }
  local_4 = (uint)local_22;
  goto LAB_00007b52;
}

#undef local_22
#undef local_20
#undef local_18
#undef local_10
#undef local_4

#define local_8 (*(ulonglong *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x7b60
 */

ulonglong FUN_00007b60(longlong param_1,int param_2,longlong param_3,longlong param_4,uint *param_5,
                      char *param_6,uint param_7,undefined4 *param_8)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  ulonglong uVar2;

  uVar1 = (param_7 & 0x3fffffff) >> 7;
  if (((((param_8 == (undefined4 *)0x0) || (param_3 == 0)) || (param_4 == 0)) ||
      ((param_5 == (uint *)0x0 || (param_6 == (char *)0x0)))) ||
     (*(uint *)(param_3 + 0x10) <= uVar1)) {
    local_8 = 0x8000000000000001;
  }
  else {
    if ((*param_6 == '\0') || (*param_5 != uVar1)) {
      uVar2 = FUN_00006230(param_1,(ulonglong)(param_2 + *(int *)(param_3 + 0xc) + uVar1),param_4);
      if ((longlong)uVar2 < 0) {
        return uVar2;
      }
      *param_5 = uVar1;
      *param_6 = '\x01';
    }
    uVar2 = FUN_00006110((undefined4 *)(param_4 + (ulonglong)((param_7 & 0x7f) << 2)));
    *param_8 = (int)uVar2;
    local_8 = 0;
  }
  return local_8;
}

#undef local_8

#undef DAT_0000b5d8
#define DAT_0000b5d8 (*(uint64_t *)(((uintptr_t)efi_state + 0x25d8U)))
#define local_8 (*(ulonglong *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x7cc0
 */

ulonglong FUN_00007cc0(longlong param_1,ulonglong param_2,longlong param_3,undefined8 param_4)

{
  unsigned char frame[64] = {0};


  if (-DAT_0000b5d8 - 1U < param_2) {
    local_8 = 0x8000000000000001;
  }
  else {
    local_8 = FUN_00007d40(param_1,DAT_0000b5d8 + param_2,param_3,param_4);
  }
  return local_8;
}

#undef DAT_0000b5d8
#undef local_8

#define local_8 (*(ulonglong *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x7d40
 */

ulonglong FUN_00007d40(longlong param_1,ulonglong param_2,longlong param_3,undefined8 param_4)

{
  unsigned char frame[64] = {0};


  if ((((param_1 == 0) || (*(longlong *)(param_1 + 8) == 0)) || (*(longlong *)(param_1 + 0x18) == 0)
      ) || (((*(int *)(*(longlong *)(param_1 + 8) + 0xc) != 0x200 || (param_3 == 0)) ||
            (((ulonglong)-param_3 < param_2 ||
             (*(ulonglong *)(*(longlong *)(param_1 + 8) + 0x18) < (param_2 + param_3) - 1)))))) {
    local_8 = 0x8000000000000001;
  }
  else {
    local_8 = (**(code **)(param_1 + 0x18))
                        (param_1,**(undefined4 **)(param_1 + 8),param_2,param_3 << 9,param_4);
  }
  return local_8;
}

#undef local_8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x7e20
 */

ulonglong FUN_00007e20(undefined1 *param_1,undefined8 param_2)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;

  FUN_00008260(param_1,(int)param_2);
  uVar1 = FUN_00008260(param_1 + 4,(int)((ulonglong)param_2 >> 0x20));
  return uVar1;
}


#undef DAT_0000b5b0
#define DAT_0000b5b0 (*(uint64_t *)(((uintptr_t)efi_state + 0x25b0U)))
#undef DAT_0000b5b8
#define DAT_0000b5b8 (*(uint64_t *)(((uintptr_t)efi_state + 0x25b8U)))
#undef DAT_0000b5c8
#define DAT_0000b5c8 (*(uint64_t *)(((uintptr_t)efi_state + 0x25c8U)))
#undef DAT_0000b5d0
#define DAT_0000b5d0 (*(uint32_t *)(((uintptr_t)efi_state + 0x25d0U)))
#undef DAT_0000b5f0
#define DAT_0000b5f0 (*(uint64_t *)(((uintptr_t)efi_state + 0x25f0U)))
#undef DAT_0000b600
#define DAT_0000b600 (*(uint8_t *)(((uintptr_t)efi_state + 0x2600U)))
#define uStack_4 (*(uint *)(frame + 44))
#define lStack_18 (*(longlong *)(frame + 24))
#define uStack_20 (*(ulonglong *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x7e60
 */

uint recovered_7e60(void *command)

{
  unsigned char frame[80] = {0};

  int iVar1;
  ulonglong uVar2;
  longlong lVar3;

  if (command == (void *)0x0) {
    uStack_4 = 0;
  }
  else {
    FUN_00001b30();
    *(undefined4 *)((longlong)command + 4) = 0;
    if (*(int *)command == 1) {
      for (uStack_20 = 0; uStack_20 < DAT_0000b5f0; uStack_20 = uStack_20 + 1) {
        uVar2 = FUN_000082d0(*(longlong *)(&DAT_0000b600 + uStack_20 * 8));
        *(int *)((longlong)command + 4) = (int)uVar2;
        if (*(int *)((longlong)command + 4) != 0) {
          return *(uint *)((longlong)command + 4);
        }
      }
      uStack_4 = 0;
    }
    else if (*(int *)command == 6) {
      if (((DAT_0000b5b8 == 0) || (*(longlong *)(DAT_0000b5b8 + 8) == 0)) ||
         (*(int *)((longlong)command + 0x10) == 0)) {
        uStack_4 = 0;
      }
      else {
        lVar3 = (**(code **)(DAT_0000b5b8 + 8))(DAT_0000b5b8,*(int *)((longlong)command + 0x10));
        *(uint *)((longlong)command + 4) = (uint)(lVar3 == 0);
        uStack_4 = *(uint *)((longlong)command + 4);
      }
    }
    else if ((*(int *)command == 2) || (*(int *)command == 3)) {
      iVar1 = *(int *)((longlong)command + 0x10);
      if (((DAT_0000b5c8 == 0) ||
          (((*(longlong *)(DAT_0000b5c8 + 8) == 0 ||
            (*(int *)(*(longlong *)(DAT_0000b5c8 + 8) + 0xc) != 0x200)) ||
           (*(int *)((longlong)command + 0x14) == 0)))) ||
         (((*(uint *)((longlong)command + 0x14) & 0x1ff) != 0 || (iVar1 == 0)))) {
        uStack_4 = 0;
      }
      else {
        if (*(int *)command == 2) {
          if (*(longlong *)(DAT_0000b5c8 + 0x18) == 0) {
            return 0;
          }
          lStack_18 = (**(code **)(DAT_0000b5c8 + 0x18))
                                (DAT_0000b5c8,DAT_0000b5d0,*(undefined8 *)((longlong)command + 8),
                                 *(undefined4 *)((longlong)command + 0x14),iVar1);
        }
        else {
          if (*(longlong *)(DAT_0000b5c8 + 0x20) == 0) {
            return 0;
          }
          lStack_18 = (**(code **)(DAT_0000b5c8 + 0x20))
                                (DAT_0000b5c8,DAT_0000b5d0,*(undefined8 *)((longlong)command + 8),
                                 *(undefined4 *)((longlong)command + 0x14),iVar1);
        }
        *(uint *)((longlong)command + 4) = (uint)(lStack_18 == 0);
        uStack_4 = *(uint *)((longlong)command + 4);
      }
    }
    else if (*(int *)command == 5) {
      if ((DAT_0000b5c8 == 0) || (*(longlong *)(DAT_0000b5c8 + 8) == 0)) {
        uStack_4 = 0;
      }
      else if ((*(char *)(*(longlong *)(DAT_0000b5c8 + 8) + 8) == '\0') ||
              (*(longlong *)(DAT_0000b5c8 + 0x28) == 0)) {
        *(undefined4 *)((longlong)command + 4) = 1;
        uStack_4 = *(uint *)((longlong)command + 4);
      }
      else {
        lVar3 = (**(code **)(DAT_0000b5c8 + 0x28))();
        *(uint *)((longlong)command + 4) = (uint)(lVar3 == 0);
        uStack_4 = *(uint *)((longlong)command + 4);
      }
    }
    else if (*(int *)command == 4) {
      if ((DAT_0000b5b0 == 0) || (*(longlong *)(DAT_0000b5b0 + 0xf8) == 0)) {
        uStack_4 = 0;
      }
      else {
        lVar3 = (**(code **)(DAT_0000b5b0 + 0xf8))();
        *(uint *)((longlong)command + 4) = (uint)(lVar3 == 0);
        uStack_4 = *(uint *)((longlong)command + 4);
      }
    }
    else {
      uStack_4 = 0;
    }
  }
  return uStack_4;
}

#undef DAT_0000b5b0
#undef DAT_0000b5b8
#undef DAT_0000b5c8
#undef DAT_0000b5d0
#undef DAT_0000b5f0
#undef DAT_0000b600
#undef uStack_4
#undef lStack_18
#undef uStack_20

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x8260
 */

ulonglong FUN_00008260(undefined1 *param_1,undefined4 param_2)

{
  unsigned char frame[64] = {0};

  *param_1 = (char)param_2;
  param_1[1] = (char)((uint)param_2 >> 8);
  param_1[2] = (char)((uint)param_2 >> 0x10);
  param_1[3] = (char)((uint)param_2 >> 0x18);
  return (ulonglong)param_1;
}


#undef DAT_0000b5b0
#define DAT_0000b5b0 (*(uint64_t *)(((uintptr_t)efi_state + 0x25b0U)))
#define local_4 (*(uint *)(frame + 32))
#define local_14 (*(ushort (*)[2])(frame + 16))
#define local_10 (*(longlong *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x82d0
 */

ulonglong FUN_000082d0(longlong param_1)

{
  unsigned char frame[68] = {0};

  longlong lVar1;
  ulonglong uVar2;

  if ((param_1 == 0) || (*(longlong *)(param_1 + 8) == 0)) {
    local_4 = 0;
  }
  else {
    local_14[0] = 0;
    local_14[1] = 0;
    local_10 = param_1;
    lVar1 = (**(code **)(param_1 + 8))(param_1,local_14);
    if (lVar1 == 0) {
      uVar2 = FUN_00008400(local_14);
      local_4 = (uint)uVar2;
    }
    else if ((((lVar1 == -0x7ffffffffffffffa) && (*(longlong *)(local_10 + 0x10) != 0)) &&
             (DAT_0000b5b0 != 0)) && (*(longlong *)(DAT_0000b5b0 + 0x78) != 0)) {
      lVar1 = (**(code **)(DAT_0000b5b0 + 0x78))(*(undefined8 *)(local_10 + 0x10));
      if (lVar1 == 0) {
        local_14[0] = 0;
        local_14[1] = 0;
        lVar1 = (**(code **)(local_10 + 8))(local_10,local_14);
        if (lVar1 == 0) {
          uVar2 = FUN_00008400(local_14);
          local_4 = (uint)uVar2;
        }
        else {
          local_4 = 0;
        }
      }
      else {
        local_4 = 0;
      }
    }
    else {
      local_4 = 0;
    }
  }
  return (ulonglong)local_4;
}

#undef DAT_0000b5b0
#undef local_4
#undef local_14
#undef local_10

#define local_18 (*(uint *)(frame + 16))
#define local_12 (*(char *)(frame + 22))
#define local_11 (*(byte *)(frame + 23))
#define local_4 (*(uint *)(frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x8400
 */

ulonglong FUN_00008400(ushort *param_1)

{
  unsigned char frame[72] = {0};

  ulonglong uVar1;

  local_11 = 0;
  if (param_1 == (ushort *)0x0) {
    local_4 = 0;
  }
  else {
    if (((param_1[1] != 0) && (param_1[1] < 0x80)) && (local_11 = (byte)param_1[1], local_11 == 10))
    {
      local_11 = 0xd;
    }
    uVar1 = FUN_000084f0(*param_1);
    local_12 = (char)uVar1;
    if ((local_12 == '\0') && (local_11 != 0)) {
      uVar1 = FUN_000085a0(local_11);
      local_12 = (char)uVar1;
    }
    if ((local_12 == '\x01') && (local_11 == 0)) {
      local_11 = 0x1b;
    }
    if ((local_11 == 0) && (local_12 == '\0')) {
      local_18 = 0;
    }
    else {
      local_18 = (uint)CONCAT11(local_12,local_11);
    }
    local_4 = local_18;
  }
  return (ulonglong)local_4;
}

#undef local_18
#undef local_12
#undef local_11
#undef local_4

#undef DAT_0000a000
#define DAT_0000a000 (*(uint8_t *)(((uintptr_t)efi_state + 0x1000U)))
#define local_1 (*(undefined1 *)(frame + 31))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x84f0
 */

ulonglong FUN_000084f0(ushort param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  uint uVar2;
  ulonglong uVar3;

  if ((param_1 < 0xb) || (0x16 < param_1)) {
    uVar2 = param_1 - 1;
    iVar1 = param_1 - 0x17;
    if (uVar2 < 0x16 || iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00008542. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*(code *)(&DAT_0000a000 + *(int *)(&DAT_0000a000 + (ulonglong)uVar2 * 4)))();
      return uVar3;
    }
    local_1 = 0;
  }
  else {
    iVar1 = param_1 + 0x30;
    local_1 = (undefined1)iVar1;
  }
  return (ulonglong)CONCAT31((int3)((uint)iVar1 >> 8),local_1);
}

#undef DAT_0000a000
#undef local_1

/* ASCII to set-1 scan code, recovered exhaustively from the reference. */
ulonglong FUN_000085a0(byte value)
{
  static const uint8_t codes[256]={
    0,0,0,0,0,0,0,0,14,0,28,0,0,28,0,0,
    0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,
    57,0,40,0,0,0,0,40,0,0,0,13,51,12,52,53,
    11,2,3,4,5,6,7,8,9,10,39,39,51,13,52,53,
    0,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,
    45,46,47,48,49,50,51,52,53,54,55,26,43,27,0,12,
    41,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,
    45,46,47,48,49,50,51,52,53,54,55,26,43,27,41,14,
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  };
  return codes[value];
}


#define local_8 (*(ulonglong *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x86e0
 */

ulonglong FUN_000086e0(longlong param_1,ulonglong *param_2,ulonglong param_3,ulonglong param_4)

{
  unsigned char frame[64] = {0};

  ulonglong *in_RAX;

  if ((((param_1 != 0) && (param_2 != (ulonglong *)0x0)) && (in_RAX = param_2, *param_2 < 0x100)) &&
     ((in_RAX = (ulonglong *)param_4, param_3 < param_4 &&
      (in_RAX = (ulonglong *)0xfc000000, param_3 < 0xfc000000)))) {
    local_8 = param_4;
    if (0xfc000000 < param_4) {
      local_8 = 0xfc000000;
    }
    *(ulonglong *)(param_1 + *param_2 * 0x10) = param_3;
    *(ulonglong *)(param_1 + *param_2 * 0x10 + 8) = local_8;
    *param_2 = *param_2 + 1;
    in_RAX = param_2;
  }
  return (ulonglong)in_RAX;
}

#undef local_8

#define local_28 (*(ulonglong *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x8790
 */

ulonglong FUN_00008790(longlong param_1,ulonglong *param_2,undefined8 param_3,ulonglong param_4,
                      char param_5,undefined1 param_6)

{
  unsigned char frame[88] = {0};

  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  bool bVar4;

  uVar1 = 0x1000;
  if (param_5 != '\0') {
    uVar1 = 0x200000;
  }
  uVar2 = (ulonglong)uVar1;
  uVar3 = uVar2;
  if (((param_1 != 0) && (param_2 != (ulonglong *)0x0)) && (uVar3 = param_4, uVar2 <= param_4)) {
    local_28 = *param_2;
    if (*param_2 < 0x10) {
      *param_2 = *param_2 + 1;
    }
    else {
      if (param_4 <= *(ulonglong *)(param_1 + 0x170)) {
        return param_4;
      }
      local_28 = 0xf;
    }
    while( true ) {
      bVar4 = false;
      if (local_28 != 0) {
        bVar4 = *(ulonglong *)(param_1 + (local_28 - 1) * 0x18 + 8) < param_4;
      }
      if (!bVar4) break;
      if (local_28 < 0x10) {
        *(undefined8 *)(param_1 + local_28 * 0x18) =
             *(undefined8 *)(param_1 + (local_28 - 1) * 0x18);
        *(undefined8 *)(param_1 + local_28 * 0x18 + 8) =
             *(undefined8 *)(param_1 + (local_28 - 1) * 0x18 + 8);
        *(undefined1 *)(param_1 + local_28 * 0x18 + 0x10) =
             *(undefined1 *)(param_1 + (local_28 - 1) * 0x18 + 0x10);
        *(undefined1 *)(param_1 + local_28 * 0x18 + 0x11) =
             *(undefined1 *)(param_1 + (local_28 - 1) * 0x18 + 0x11);
      }
      local_28 = local_28 - 1;
    }
    *(undefined8 *)(param_1 + local_28 * 0x18) = param_3;
    *(ulonglong *)(param_1 + local_28 * 0x18 + 8) = param_4;
    *(char *)(param_1 + local_28 * 0x18 + 0x10) = param_5;
    uVar3 = param_1 + local_28 * 0x18;
    *(undefined1 *)(uVar3 + 0x11) = param_6;
  }
  return uVar3;
}

#undef local_28

#define local_1 (*(undefined1 *)(frame + 103))
#define local_58 (*(ulonglong * *)(frame + 16))
#define local_50 (*(ulonglong * *)(frame + 24))
#define local_48 (*(ulonglong *)(frame + 32))
#define local_38 (*(ulonglong * *)(frame + 48))
#define local_30 (*(ulonglong * *)(frame + 56))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x89a0
 */

ulonglong FUN_000089a0(longlong param_1,ulonglong param_2,ulonglong param_3,ulonglong *param_4,
                      ulonglong *param_5)

{
  unsigned char frame[136] = {0};

  bool bVar1;

  if ((param_4 == (ulonglong *)0x0) || (param_5 == (ulonglong *)0x0)) {
    local_1 = 0;
  }
  else {
    local_30 = (ulonglong *)*param_4;
    if (local_30 < param_3) {
      local_30 = (ulonglong *)param_3;
    }
    local_30 = (ulonglong *)FUN_00004f60((longlong)local_30,0x200000);
    do {
      local_38 = (ulonglong *)0xfc000000;
      bVar1 = false;
      if ((ulonglong *)0xfbffffff < local_30) {
        local_1 = 0;
        param_5 = (ulonglong *)0xfc000000;
        goto LAB_00008b91;
      }
      for (local_48 = 0; local_48 < param_2; local_48 = local_48 + 1) {
        local_50 = *(ulonglong **)(param_1 + local_48 * 0x10);
        local_58 = *(ulonglong **)(param_1 + local_48 * 0x10 + 8);
        if (((local_50 < local_58) && (param_3 < local_58)) && (local_50 < (ulonglong *)0xfc000000))
        {
          if (local_50 < param_3) {
            local_50 = (ulonglong *)param_3;
          }
          if ((ulonglong *)0xfc000000 < local_58) {
            local_58 = (ulonglong *)0xfc000000;
          }
          if ((local_30 < local_58) && (local_50 <= local_30)) {
            local_30 = (ulonglong *)FUN_00004f60((longlong)local_58,0x200000);
            bVar1 = true;
            break;
          }
          if ((local_30 < local_58) && (local_50 < local_38)) {
            local_38 = (ulonglong *)FUN_00004f30((ulonglong)local_50,0x200000);
          }
        }
      }
    } while (bVar1);
    if (local_30 < local_38) {
      *param_4 = (ulonglong)local_30;
      *param_5 = (ulonglong)local_38;
      local_1 = 1;
    }
    else {
      local_1 = 0;
      param_5 = local_38;
    }
  }
LAB_00008b91:
  return CONCAT71((int7)((ulonglong)param_5 >> 8),local_1);
}

#undef local_1
#undef local_58
#undef local_50
#undef local_48
#undef local_38
#undef local_30

#undef DAT_0000b5b0
#define DAT_0000b5b0 (*(uint64_t *)(((uintptr_t)efi_state + 0x25b0U)))
#define local_40 (*(ulonglong *)(frame + 16))
#define local_20 (*(ulonglong *)(frame + 48))
#define local_18 (*(ulonglong *)(frame + 56))
#define local_10 (*(ulonglong *)(frame + 64))
#define local_8 (*(ulonglong *)(frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x8ba0
 */

ulonglong FUN_00008ba0(ulonglong param_1,ulonglong param_2)

{
  unsigned char frame[112] = {0};


  if ((((DAT_0000b5b0 == 0) || (*(longlong *)(DAT_0000b5b0 + 0x28) == 0)) || (param_2 == 0)) ||
     (((param_1 & 0xfff) != 0 || ((param_2 & 0xfff) != 0)))) {
    local_8 = 0x8000000000000001;
  }
  else if (param_2 >> 0xc == 0) {
    local_8 = 0x8000000000000009;
  }
  else {
    local_20 = param_1;
    local_18 = param_1;
    local_10 = param_2;
    local_40 = (**(code **)(DAT_0000b5b0 + 0x28))(2,2,param_2 >> 0xc,&local_20);
    if (((longlong)local_40 < 0) || (local_20 != local_18)) {
      if (-1 < (longlong)local_40) {
        local_40 = 0x8000000000000001;
      }
      local_8 = local_40;
    }
    else {
      local_8 = 0;
    }
  }
  return local_8;
}

#undef DAT_0000b5b0
#undef local_40
#undef local_20
#undef local_18
#undef local_10
#undef local_8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x8ce0
 */

ulonglong FUN_00008ce0(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x8cf0
 */

ulonglong FUN_00008cf0(uint *param_1,uint param_2,uint param_3)

{
  unsigned char frame[64] = {0};

  uint *in_RAX;

  if (((param_1 != (uint *)0x0) && (param_3 != 0)) && (in_RAX = param_1, *param_1 < 0x10)) {
    param_1[(ulonglong)*param_1 + 1] = param_2;
    param_1[(ulonglong)*param_1 + 0x11] = param_3;
    FUN_00008e10((longlong)param_1,param_3);
    *param_1 = *param_1 + 1;
  }
  return (ulonglong)in_RAX;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x8d70
 */

ulonglong FUN_00008d70(longlong param_1,undefined8 param_2,longlong param_3)

{
  unsigned char frame[64] = {0};

  ulonglong in_RAX;

  if (((param_1 != 0) && (param_3 != 0)) && (in_RAX = param_1, *(uint *)(param_1 + 0x88) < 0x40)) {
    *(undefined8 *)(param_1 + 0x90 + (ulonglong)*(uint *)(param_1 + 0x88) * 8) = param_2;
    *(longlong *)(param_1 + 0x290 + (ulonglong)*(uint *)(param_1 + 0x88) * 8) = param_3;
    FUN_00008e70(param_1,param_3);
    *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
  }
  return in_RAX;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x8e10
 */

ulonglong FUN_00008e10(longlong param_1,int param_2)

{
  unsigned char frame[64] = {0};

  ulonglong in_RAX;

  if ((param_1 != 0) && (param_2 != 0)) {
    in_RAX = param_1;
    if (-param_2 - 1U < *(uint *)(param_1 + 0x84)) {
      *(undefined4 *)(param_1 + 0x84) = 0xffffffff;
    }
    else {
      *(int *)(param_1 + 0x84) = param_2 + *(int *)(param_1 + 0x84);
    }
  }
  return in_RAX;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x8e70
 */

ulonglong FUN_00008e70(longlong param_1,longlong param_2)

{
  unsigned char frame[64] = {0};

  ulonglong in_RAX;

  if ((param_1 != 0) && (param_2 != 0)) {
    in_RAX = param_1;
    if (-param_2 - 1U < *(ulonglong *)(param_1 + 0x490)) {
      *(undefined8 *)(param_1 + 0x490) = 0xffffffffffffffff;
    }
    else {
      *(longlong *)(param_1 + 0x490) = param_2 + *(longlong *)(param_1 + 0x490);
    }
  }
  return in_RAX;
}


ulonglong FUN_00008ee0(void) { uintptr_t value; __asm__ volatile("mov %%cr0,%0":"=r"(value)); return value; }


ulonglong FUN_00008f00(ulonglong value) { __asm__ volatile("mov %0,%%cr0"::"r"(value):"memory"); return value; }

