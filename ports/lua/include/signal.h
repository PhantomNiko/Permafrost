/* Permafrost Lua host interface; Pooka's Free Software License. */
#pragma once
typedef int sig_atomic_t;
typedef void (*sighandler_t)(int);
#define SIGINT 2
#define SIG_DFL ((sighandler_t)0)
sighandler_t signal(int,sighandler_t);
