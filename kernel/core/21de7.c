/* Permafrost 0.5; Pooka's Free Software License. */
#include "functions.h"
int recovered_21de7(char *out, uint capacity, char *format, ...) {
    __builtin_va_list args;
    __builtin_va_start(args, format);
    int count = recovered_21a8b(out, capacity, format, (double *)args);
    __builtin_va_end(args);
    return count;
}
