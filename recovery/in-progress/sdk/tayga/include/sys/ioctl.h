#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#define TIOCGWINSZ 0x40087468
#define FIONBIO 0x8004667e

struct winsize {
	unsigned short ws_row;
	unsigned short ws_col;
	unsigned short ws_xpixel;
	unsigned short ws_ypixel;
};

int ioctl(int fd, unsigned long request, ...);

#ifdef __cplusplus
}
#endif
