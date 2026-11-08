#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#define SCHED_OTHER 0
#define SCHED_FIFO 1
#define SCHED_RR 2

struct sched_param {
	int sched_priority;
};

int sched_yield(void);
int sched_get_priority_min(int policy);
int sched_get_priority_max(int policy);
int sched_setscheduler(int pid, int policy, const struct sched_param* param);
int sched_getscheduler(int pid);
int sched_setparam(int pid, const struct sched_param* param);
int sched_getparam(int pid, struct sched_param* param);

#ifdef __cplusplus
}
#endif
