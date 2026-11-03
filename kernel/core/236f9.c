/* Permafrost 0.2; Pooka's Free Software License. */
#include "functions.h"
void recovered_236f9(char *format, ...) {
    char text[512];
    __builtin_va_list args;
    __builtin_va_start(args, format);
    recovered_21685(text, sizeof(text), format, (double *)args);
    __builtin_va_end(args);
    recovered_22401(text);
}
