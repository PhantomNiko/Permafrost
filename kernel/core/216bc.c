/* Permafrost 0.1; Pooka's Free Software License. */
#include "functions.h"
int recovered_216bc(char *out, uint capacity, char *format, ...) {
    __builtin_va_list args;
    __builtin_va_start(args, format);
    int count = recovered_21360(out, capacity, format, (double *)args);
    __builtin_va_end(args);
    return count;
}
