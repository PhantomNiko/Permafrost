/* Permafrost 0.3; Pooka's Free Software License. */
#include "functions.h"
int recovered_219e1(char *out, uint capacity, char *format, ...) {
    __builtin_va_list args;
    __builtin_va_start(args, format);
    int count = recovered_21685(out, capacity, format, (double *)args);
    __builtin_va_end(args);
    return count;
}
