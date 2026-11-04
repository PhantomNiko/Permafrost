#include "functions.h"
uint64_t __attribute__((ms_abi)) pf_efi_entry(uint64_t image,uint64_t system) { *(uint64_t*)efi_state=(uintptr_t)efi_state; return FUN_000012f0(image,system); }
