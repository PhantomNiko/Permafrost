/* PFZ1 boot payload decoder. Pooka's Free Software License. */
#pragma once
#include <stddef.h>
#include <stdint.h>

enum pf_pfz_result {
    PF_PFZ_OK = 0,
    PF_PFZ_HEADER = 1,
    PF_PFZ_SIZE = 2,
    PF_PFZ_INPUT = 3,
    PF_PFZ_MATCH = 4,
    PF_PFZ_CHECKSUM = 5
};

/* Reads exactly count bytes at an absolute offset; returns nonzero on success.
 * The destination must not overlap the compressed input. No allocation or
 * architecture-specific instructions are required by the decoder. */
typedef int (*pf_pfz_read)(void *context, size_t offset, void *destination, size_t count);
int pf_pfz_decode(pf_pfz_read read, void *context, size_t input_size,
                  void *output, size_t capacity, size_t *written);
int pf_pfz_unpack(const void *input, size_t input_size,
                  void *output, size_t capacity, size_t *written);
