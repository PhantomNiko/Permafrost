/* Permafrost 1.1 Steward interface; Pooka's Free Software License. */
#ifndef PERMAFROST_STEWARD_H
#define PERMAFROST_STEWARD_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uint32_t steward_console_write_line(const char *text);
uint32_t steward_shell_set_string(const char *name, const char *value);
uint32_t steward_shell_get_string(const char *name, char *output, uint32_t capacity);
uint32_t steward_csv_get_variable(const char *csv, const char *selector,
                                 char *output, uint32_t capacity);

#ifdef __cplusplus
}
#endif

#endif
