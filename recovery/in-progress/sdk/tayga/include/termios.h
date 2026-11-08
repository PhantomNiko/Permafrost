#pragma once

#include <sys/types.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef unsigned int tcflag_t;
typedef unsigned char cc_t;
typedef unsigned int speed_t;

#define NCCS 20

#define TCSANOW 0
#define TCSADRAIN 1
#define TCSAFLUSH 2

#define ECHO 0x00000008u
#define ICANON 0x00000100u
#define ISIG 0x00000080u
#define IEXTEN 0x00000400u
#define OPOST 0x00000001u
#define CREAD 0x00000800u
#define CS8 0x00000300u

struct termios {
	tcflag_t c_iflag;
	tcflag_t c_oflag;
	tcflag_t c_cflag;
	tcflag_t c_lflag;
	cc_t c_cc[NCCS];
	speed_t c_ispeed;
	speed_t c_ospeed;
};

int tcgetattr(int fd, struct termios* termiosp);
int tcsetattr(int fd, int optionalActions, const struct termios* termiosp);
void cfmakeraw(struct termios* termiosp);

#ifdef __cplusplus
}
#endif
