/* Permafrost 0.6; Pooka's Free Software License. */
#include "functions.h"
void recovered_3020d(char *format, ...) {
    char text[512];
    __builtin_va_list args;
    __builtin_va_start(args, format);
    recovered_2157e(text, sizeof(text), format, (double *)args);
    __builtin_va_end(args);
    recovered_2fca3(text);
}
