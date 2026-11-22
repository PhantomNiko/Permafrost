#pragma once

#include <time.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef unsigned long pthread_t;
typedef struct pthread_mutex_t { int value; } pthread_mutex_t;
typedef struct pthread_mutexattr_t { int value; } pthread_mutexattr_t;
typedef struct pthread_cond_t { int value; } pthread_cond_t;
typedef struct pthread_condattr_t { int value; } pthread_condattr_t;
typedef struct pthread_once_t { int done; } pthread_once_t;
typedef struct pthread_attr_t { int value; } pthread_attr_t;
typedef struct pthread_rwlock_t { int value; } pthread_rwlock_t;
typedef struct pthread_rwlockattr_t { int value; } pthread_rwlockattr_t;
typedef unsigned int pthread_key_t;

#define PTHREAD_ONCE_INIT { 0 }
#define PTHREAD_MUTEX_INITIALIZER { 0 }
#define PTHREAD_COND_INITIALIZER { 0 }
#define PTHREAD_RWLOCK_INITIALIZER { 0 }

#define PTHREAD_MUTEX_NORMAL 0
#define PTHREAD_MUTEX_RECURSIVE 1
#define PTHREAD_MUTEX_ERRORCHECK 2

int pthread_once(pthread_once_t* onceControl, void (*initRoutine)(void));
int pthread_create(pthread_t* thread, const pthread_attr_t* attr, void* (*startRoutine)(void*), void* arg);
int pthread_join(pthread_t thread, void** valuePtr);
int pthread_detach(pthread_t thread);
int pthread_attr_init(pthread_attr_t* attr);
int pthread_attr_destroy(pthread_attr_t* attr);
int pthread_mutex_init(pthread_mutex_t* mutex, const pthread_mutexattr_t* attr);
int pthread_mutex_destroy(pthread_mutex_t* mutex);
int pthread_mutex_lock(pthread_mutex_t* mutex);
int pthread_mutex_trylock(pthread_mutex_t* mutex);
int pthread_mutex_unlock(pthread_mutex_t* mutex);
int pthread_mutexattr_init(pthread_mutexattr_t* attr);
int pthread_mutexattr_destroy(pthread_mutexattr_t* attr);
int pthread_mutexattr_settype(pthread_mutexattr_t* attr, int type);
int pthread_cond_init(pthread_cond_t* cond, const pthread_condattr_t* attr);
int pthread_cond_destroy(pthread_cond_t* cond);
int pthread_cond_wait(pthread_cond_t* cond, pthread_mutex_t* mutex);
int pthread_cond_timedwait(pthread_cond_t* cond, pthread_mutex_t* mutex, const struct timespec* abstime);
int pthread_cond_signal(pthread_cond_t* cond);
int pthread_cond_broadcast(pthread_cond_t* cond);
int pthread_key_create(pthread_key_t* key, void (*destructor)(void*));
int pthread_key_delete(pthread_key_t key);
void* pthread_getspecific(pthread_key_t key);
int pthread_setspecific(pthread_key_t key, const void* value);
int pthread_rwlock_init(pthread_rwlock_t* lock, const pthread_rwlockattr_t* attr);
int pthread_rwlock_destroy(pthread_rwlock_t* lock);
int pthread_rwlock_rdlock(pthread_rwlock_t* lock);
int pthread_rwlock_wrlock(pthread_rwlock_t* lock);
int pthread_rwlock_unlock(pthread_rwlock_t* lock);
pthread_t pthread_self(void);
int pthread_equal(pthread_t left, pthread_t right);

#ifdef __cplusplus
}
#endif
