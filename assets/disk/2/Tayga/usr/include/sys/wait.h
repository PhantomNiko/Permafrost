#pragma once

#include <sys/types.h>

#ifdef __cplusplus
extern "C" {
#endif

#define WNOHANG 1
#define WEXITSTATUS(status) (((status) >> 8) & 0xff)
#define WIFEXITED(status) (1)
#define WTERMSIG(status) ((status) & 0x7f)
#define WIFSIGNALED(status) (0)

struct rusage;

pid_t wait(int* status);
pid_t waitpid(pid_t pid, int* status, int options);
pid_t wait4(pid_t pid, int* status, int options, struct rusage* usage);

#ifdef __cplusplus
}
#endif
