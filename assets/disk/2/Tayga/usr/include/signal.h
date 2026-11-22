#pragma once

#include <sys/types.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef int sig_atomic_t;
typedef void (*sighandler_t)(int);

#define SIG_DFL ((sighandler_t)0)
#define SIG_IGN ((sighandler_t)1)
#define SIG_ERR ((sighandler_t)-1)

#define SIGHUP 1
#define SIGINT 2
#define SIGQUIT 3
#define SIGILL 4
#define SIGTRAP 5
#define SIGABRT 6
#define SIGEMT 7
#define SIGFPE 8
#define SIGKILL 9
#define SIGBUS 10
#define SIGSEGV 11
#define SIGSYS 12
#define SIGPIPE 13
#define SIGALRM 14
#define SIGTERM 15
#define SIGURG 16
#define SIGSTOP 17
#define SIGTSTP 18
#define SIGCONT 19
#define SIGCHLD 20
#define SIGTTIN 21
#define SIGTTOU 22
#define SIGIO 23
#define SIGXCPU 24
#define SIGXFSZ 25
#define SIGVTALRM 26
#define SIGPROF 27
#define SIGWINCH 28
#define SIGINFO 29
#define SIGUSR1 30
#define SIGUSR2 31

#define SIG_BLOCK 1
#define SIG_UNBLOCK 2
#define SIG_SETMASK 3

#define SA_ONSTACK 0x0001
#define SA_RESETHAND 0x0002
#define SA_NODEFER 0x0010
#define SA_SIGINFO 0x0040

typedef unsigned int sigset_t;
typedef struct siginfo {
	int si_signo;
	int si_errno;
	int si_code;
	pid_t si_pid;
} siginfo_t;

struct sigaction {
	sighandler_t sa_handler;
	void (*sa_sigaction)(int, siginfo_t*, void*);
	sigset_t sa_mask;
	int sa_flags;
};

sighandler_t signal(int signalNumber, sighandler_t handler);
int raise(int signalNumber);
int kill(int pid, int signalNumber);
int sigemptyset(sigset_t* set);
int sigfillset(sigset_t* set);
int sigaddset(sigset_t* set, int signalNumber);
int sigdelset(sigset_t* set, int signalNumber);
int sigismember(const sigset_t* set, int signalNumber);
int sigaction(int signalNumber, const struct sigaction* action, struct sigaction* oldAction);
int sigprocmask(int how, const sigset_t* set, sigset_t* oldSet);
int pthread_sigmask(int how, const sigset_t* set, sigset_t* oldSet);
char* strsignal(int signalNumber);

#ifdef __cplusplus
}
#endif
