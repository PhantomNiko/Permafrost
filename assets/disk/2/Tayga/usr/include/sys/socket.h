#pragma once

#include <stddef.h>
#include <stdint.h>
#include <sys/types.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef uint16_t sa_family_t;

#define AF_UNSPEC 0
#define AF_UNIX 1
#define AF_LOCAL AF_UNIX
#define AF_INET 2
#define AF_INET6 28

#define PF_UNSPEC AF_UNSPEC
#define PF_UNIX AF_UNIX
#define PF_LOCAL AF_LOCAL
#define PF_INET AF_INET
#define PF_INET6 AF_INET6

#define SOCK_STREAM 1
#define SOCK_DGRAM 2
#define SOCK_RAW 3

#define SOL_SOCKET 0xffff
#define SO_REUSEADDR 0x0004
#define SO_ERROR 0x1007
#define SO_PEERCRED 0x0011

#define SHUT_RD 0
#define SHUT_WR 1
#define SHUT_RDWR 2

struct sockaddr {
	sa_family_t sa_family;
	char sa_data[14];
};

int socket(int domain, int type, int protocol);
int connect(int socket, const struct sockaddr* address, socklen_t address_len);
int bind(int socket, const struct sockaddr* address, socklen_t address_len);
int listen(int socket, int backlog);
int accept(int socket, struct sockaddr* address, socklen_t* address_len);
int shutdown(int socket, int how);
int setsockopt(int socket, int level, int option_name, const void* option_value, socklen_t option_len);
ssize_t send(int socket, const void* buffer, size_t length, int flags);
ssize_t recv(int socket, void* buffer, size_t length, int flags);

#ifdef __cplusplus
}
#endif
