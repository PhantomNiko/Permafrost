/* Permafrost 0.6; Pooka's Free Software License. */
#include "functions.h"
int recovered_22362(char *out, uint capacity, char *format, ...) {
    __builtin_va_list args;
    __builtin_va_start(args, format);
    int count = recovered_22006(out, capacity, format, (double *)args);
    __builtin_va_end(args);
    return count;
}
