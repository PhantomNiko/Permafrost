/* Views of reused interpreter stack storage.
 * Pooka's Free Software License. */
#pragma once
#include <stddef.h>
#include "value.h"
typedef struct pf_string_builder {
    size_t length;
    size_t capacity;
    char *data;
} pf_string_builder;
typedef struct pf_parser_context {
    void *context;
    void *tokens;
    size_t position;
} pf_parser_context;
typedef union pf_workspace {
    uintptr_t bits;
    int32_t integer;
    float number;
    char *text;
    pf_kernel_value value;
    pf_string_builder builder;
    pf_parser_context parser;
} pf_workspace;
