#pragma once

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

#define AT_NULL 0
#define AT_EXECPATH 15

int elf_aux_info(int aux, void* buffer, int buffer_size);

#ifdef __cplusplus
}
#endif
