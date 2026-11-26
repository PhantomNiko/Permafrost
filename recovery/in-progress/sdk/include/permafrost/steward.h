/* Permafrost 1.1 Steward interface; Pooka's Free Software License. */
#ifndef PERMAFROST_STEWARD_H
#define PERMAFROST_STEWARD_H

#include <stdint.h>

#define STEWARD_VERSION 1u

#ifdef __cplusplus
extern "C" {
#endif

uint32_t steward_console_write_line(const char *text);
uint32_t steward_shell_set_string(const char *name, const char *value);
uint32_t steward_shell_get_string(const char *name, char *output, uint32_t capacity);
/* Arrays use a one-based field number; tables use a header name. Quoted
 * fields support commas, doubled quotes and embedded line endings. Failure
 * clears the destination when capacity permits; successful values are whole. */
uint32_t steward_csv_get_variable(const char *csv, const char *selector,
                                 char *output, uint32_t capacity);

#ifdef __cplusplus
}
#endif

#endif
