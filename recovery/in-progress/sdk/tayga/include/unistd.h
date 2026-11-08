#pragma once

#include <stddef.h>
#include <sys/types.h>

#ifdef __cplusplus
extern "C" {
#endif

#define STDIN_FILENO 0
#define STDOUT_FILENO 1
#define STDERR_FILENO 2

#define F_OK 0
#define X_OK 1
#define W_OK 2
#define R_OK 4

#define _SC_ARG_MAX 1
#define _SC_CHILD_MAX 2
#define _SC_CLK_TCK 3
#define _SC_NPROCESSORS_CONF 57
#define _SC_NPROCESSORS_ONLN 58
#define _SC_OPEN_MAX 5
#define _SC_PAGESIZE 29
#define _SC_PAGE_SIZE _SC_PAGESIZE
#define _SC_PHYS_PAGES 200
#define _SC_AVPHYS_PAGES 201
#define _SC_GETPW_R_SIZE_MAX 70

#define _POSIX_ARG_MAX 4096

ssize_t read(int fd, void* buffer, size_t size);
ssize_t write(int fd, const void* buffer, size_t size);
int close(int fd);
off_t lseek(int fd, off_t offset, int whence);
int access(const char* path, int mode);
int chdir(const char* path);
char* getcwd(char* buffer, size_t size);
int unlink(const char* path);
int rmdir(const char* path);
ssize_t readlink(const char* path, char* buffer, size_t size);
int symlink(const char* target, const char* linkPath);
int link(const char* oldPath, const char* newPath);
int chown(const char* path, uid_t owner, gid_t group);
int fchown(int fd, uid_t owner, gid_t group);
int lchown(const char* path, uid_t owner, gid_t group);
int truncate(const char* path, off_t length);
int ftruncate(int fd, off_t length);
int fsync(int fd);
int dup(int fd);
int dup2(int fd, int newfd);
int pipe(int fds[2]);
int isatty(int fd);
pid_t getpid(void);
pid_t getppid(void);
pid_t getsid(pid_t pid);
pid_t setsid(void);
int gethostname(char* name, size_t length);
pid_t fork(void);
int execve(const char* path, char* const argv[], char* const envp[]);
int execv(const char* path, char* const argv[]);
int execvp(const char* file, char* const argv[]);
uid_t getuid(void);
uid_t geteuid(void);
gid_t getgid(void);
gid_t getegid(void);
int setuid(uid_t uid);
int setgid(gid_t gid);
long sysconf(int name);
int getpagesize(void);
unsigned int alarm(unsigned int seconds);
unsigned int sleep(unsigned int seconds);
int usleep(useconds_t usec);
void _exit(int status);

#ifdef __cplusplus
}
#endif
