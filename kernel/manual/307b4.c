/* Permafrost 0.6; Pooka's Free Software License. */
#include "functions.h"
void recovered_307b4(char *format, ...) {
    char text[512];
    __builtin_va_list args;
    __builtin_va_start(args, format);
    recovered_22006(text, sizeof(text), format, (double *)args);
    __builtin_va_end(args);
    recovered_3018f(text);
}
