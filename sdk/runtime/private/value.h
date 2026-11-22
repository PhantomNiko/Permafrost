/* Private interpreter value layout recovered from the kernel ABI.
 * Pooka's Free Software License. */
#pragma once
#include <stdint.h>
typedef struct pf_kernel_value {
    int32_t kind;
    int32_t integer;
    float number;
#if __SIZEOF_POINTER__ == 8
    uint32_t field_0xc;
#endif
    char *text;
    void *storage;
    uint32_t flag;
#if __SIZEOF_POINTER__ == 8
    uint32_t field_0x24;
#endif
    void *table;
    void *array;
    void *auxiliary;
} pf_kernel_value;
