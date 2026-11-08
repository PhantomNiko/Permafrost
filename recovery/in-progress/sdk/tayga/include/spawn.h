#pragma once

#include <sys/types.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct posix_spawn_file_actions_t {
	int placeholder;
} posix_spawn_file_actions_t;

typedef struct posix_spawnattr_t {
	int placeholder;
} posix_spawnattr_t;

int posix_spawn(pid_t* pid, const char* path, const posix_spawn_file_actions_t* actions, const posix_spawnattr_t* attr, char* const argv[], char* const envp[]);
int posix_spawnp(pid_t* pid, const char* file, const posix_spawn_file_actions_t* actions, const posix_spawnattr_t* attr, char* const argv[], char* const envp[]);
int posix_spawn_file_actions_init(posix_spawn_file_actions_t* actions);
int posix_spawn_file_actions_destroy(posix_spawn_file_actions_t* actions);
int posix_spawn_file_actions_adddup2(posix_spawn_file_actions_t* actions, int fd, int newfd);
int posix_spawn_file_actions_addclose(posix_spawn_file_actions_t* actions, int fd);
int posix_spawn_file_actions_addopen(posix_spawn_file_actions_t* actions, int fd, const char* path, int flags, mode_t mode);

#ifdef __cplusplus
}
#endif
