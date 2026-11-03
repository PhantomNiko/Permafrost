/* Permafrost 0.1; Pooka's Free Software License. */
#include "functions.h"
void recovered_2609c(uint context, char *near_token, char *format, ...) {
    char text[256];
    __builtin_va_list args;
    __builtin_va_start(args, format);
    recovered_21360(text, sizeof(text), format, (double *)args);
    __builtin_va_end(args);
    recovered_21c41((char *)0x2dfa4, text);
    if (context) {
        if (near_token && *near_token)
            recovered_21c41((char *)0x2dfbb, *(uint *)context + 1, near_token);
        else
            recovered_21c41((char *)0x2dfd2, *(uint *)context + 1);
        const char *line = *(const char **)(context + 4);
        if (line && *line) recovered_21c41((char *)0x2dfdf, line);
    }
    recovered_21cca();
}
