#pragma once

#include <stddef.h>
#include <sys/time.h>
#include <sys/types.h>

#ifdef __cplusplus
extern "C" {
#endif

#define FD_SETSIZE 256

typedef struct fd_set {
	unsigned int bits[(FD_SETSIZE + 31) / 32];
} fd_set;

#define FD_ZERO(set) do { for (size_t _fd_i = 0; _fd_i < sizeof((set)->bits) / sizeof((set)->bits[0]); ++_fd_i) { (set)->bits[_fd_i] = 0u; } } while (0)
#define FD_SET(fd, set) do { if ((fd) >= 0 && (fd) < FD_SETSIZE) { (set)->bits[(fd) / 32] |= (1u << ((fd) % 32)); } } while (0)
#define FD_CLR(fd, set) do { if ((fd) >= 0 && (fd) < FD_SETSIZE) { (set)->bits[(fd) / 32] &= ~(1u << ((fd) % 32)); } } while (0)
#define FD_ISSET(fd, set) (((fd) >= 0 && (fd) < FD_SETSIZE) ? (((set)->bits[(fd) / 32] & (1u << ((fd) % 32))) != 0u) : 0)

int select(int nfds, fd_set* readfds, fd_set* writefds, fd_set* errorfds, struct timeval* timeout);

#ifdef __cplusplus
}
#endif
