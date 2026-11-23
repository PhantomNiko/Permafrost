#!/usr/bin/env python3
"""Exercise translated exclusive acquisition under competing host threads.

Pooka's Free Software License. Requires Clang and pthreads on the host.
"""
from pathlib import Path
import subprocess
import sys
import tempfile
sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'tools/ghidra'))
from translate import atomic_views

PATTERN = r'''
static int acquire(void) {
  char status;
  bool success;
  do {
    if (lock_word != 0) {
      ClearExclusiveLocal();
      return 0;
    }
    status = 1;
    success = (bool)ExclusiveMonitorPass(lock_word,0x10);
    if (success) {
      *lock_word = 2;
      status = ExclusiveMonitorsStatus();
    }
  } while (status != 0);
  return 1;
}
'''
# The native zero-guard uses a global lvalue, while pointer-form exclusive
# operations use an explicit dereference for both the guard and the store.
PATTERN = PATTERN.replace('lock_word !=', 'DAT_1000 !=').replace('ExclusiveMonitorPass(lock_word,', 'ExclusiveMonitorPass(0x1000,').replace('*lock_word =', 'DAT_1000 =')
X86_PATTERN = r"""
static int acquire_x86(unsigned index) {
  unsigned expected=0, desired=2;
  bool success;
  LOCK();
  success = expected == (&DAT_1000)[index];
  if (success) {
    (&DAT_1000)[index] = desired;
  }
  UNLOCK();
  return success;
}
"""
OLD_VALUE_PATTERN = r"""
static unsigned replace_zero(unsigned desired) {
  unsigned previous=0;
  bool success;
  LOCK();
  success = DAT_1000 == 0;
  if (success) {
    DAT_1000 = desired;
  }
  else {
    previous = (unsigned long)DAT_1000;
  }
  UNLOCK();
  return previous;
}
"""
CONDITIONAL_PATTERN = r"""
static void release_two(void) {
  LOCK();
  if (DAT_1000 == 2) {
    DAT_1000 = 0;
  }
  UNLOCK();
}
"""
PUBLICATION_PATTERN = r"""
static unsigned publish_or_get(unsigned desired) {
  unsigned actual;
  unsigned result=desired;
  LOCK();
  actual = DAT_1000;
  if (actual == 0) {
    DAT_1000 = desired;
  }
  else {
    result = (unsigned)actual;
  }
  UNLOCK();
  return result;
}
"""
REFERENCE_PATTERN = r"""
static void drop_reference(unsigned *object) {
  unsigned *slot;
  LOCK();
  slot = (unsigned *)(object + 1);
  *slot = *slot + -1;
  UNLOCK();
}
"""
REVIEWED_PATTERN = r"""
static void release_one(void) {
  bool success;
  char status;
  do {
    status = 1;
    success = (bool)ExclusiveMonitorPass(0x1000,0x10);
    if (success) {
      DAT_1000 = 0;
      status = ExclusiveMonitorsStatus();
    }
    if (!status) break;
    if (DAT_1000 != 1) { ClearExclusiveLocal(); break; }
  } while (1);
}
"""
INCREMENT_PATTERN = r"""
static void increment(void) {
  bool success;
  char status;
  do {
    status = 1;
    success = (bool)ExclusiveMonitorPass(0x2000,0x10);
    if (success) {
      status = ExclusiveMonitorsStatus();
      DAT_2000 = DAT_2000 + 1;
    }
  } while (status);
}
"""
I386_PATTERN = r"""
static int swap_i386(unsigned *observed,unsigned desired) {
  unsigned expected=*observed;
  unsigned previous;
  bool success;
  LOCK();
  previous = DAT_1000;
  success = expected == previous;
  if (success) {
    DAT_1000 = desired;
  }
  else {
    expected = previous;
  }
  UNLOCK();
  *observed=expected;
  return success;
}
"""
FENCE_PATTERN = r"""
static void touch_unchanged(void) {
  LOCK();
  DAT_2000 = DAT_2000;
  UNLOCK();
}
"""
SOURCE = r'''
#include <assert.h>
#include <pthread.h>
#include <sched.h>
#include <stdbool.h>
#include <stdint.h>
static volatile uint32_t DAT_1000;
static volatile uint32_t DAT_2000;
static unsigned active;
static unsigned total;
static void ClearExclusiveLocal(void) {}
ACQUIRE
static void *worker(void *unused) {
  (void)unused;
  for (unsigned i=0;i<10000;i++) {
    touch_unchanged();
    increment();
    for (;;) {
      unsigned expected=0;
      int success=i%3==0 ? acquire() : i%3==1 ? acquire_x86(0) : swap_i386(&expected,2);
      if(success)break;
      sched_yield();
    }
    assert(active==0);
    active++;
    total++;
    assert(active==1);
    active--;
    release_two();
  }
  return 0;
}
int main(void) {
  pthread_t threads[8];
  for(unsigned i=0;i<8;i++)assert(!pthread_create(threads+i,0,worker,0));
  for(unsigned i=0;i<8;i++)assert(!pthread_join(threads[i],0));
  assert(total==80000 && DAT_2000==80000 && !active && !DAT_1000);
  DAT_1000=3;
  assert(!acquire() && !acquire_x86(0) && DAT_1000==3);
  unsigned observed=0;
  assert(!swap_i386(&observed,9) && observed==3 && DAT_1000==3);
  assert(swap_i386(&observed,3) && observed==3 && DAT_1000==3);
  assert(replace_zero(9)==3 && DAT_1000==3);
  DAT_1000=0;
  assert(replace_zero(9)==0 && DAT_1000==9);
  release_two();assert(DAT_1000==9);
  assert(publish_or_get(11)==9 && DAT_1000==9);
  DAT_1000=0;
  assert(publish_or_get(11)==11 && DAT_1000==11);
  release_one();assert(DAT_1000==11);
  DAT_1000=1;release_one();assert(DAT_1000==0);
  unsigned object[2]={17,9};
  drop_reference(object);assert(object[0]==17 && object[1]==8);
  return 0;
}
'''


def main():
    reviewed = [{'target': 'DAT_1000', 'value': '0', 'expected': '1'}]
    translated = ''.join(atomic_views(pattern) for pattern in [PATTERN, X86_PATTERN,
        OLD_VALUE_PATTERN, CONDITIONAL_PATTERN, PUBLICATION_PATTERN, REFERENCE_PATTERN,
        INCREMENT_PATTERN, I386_PATTERN, FENCE_PATTERN])
    translated += atomic_views(REVIEWED_PATTERN, reviewed)
    for annotations in [[], reviewed * 2, [dict(reviewed[0], value='2')]]:
        try:
            atomic_views(REVIEWED_PATTERN, annotations)
        except ValueError:
            pass
        else:
            raise AssertionError('accepted mismatched exclusive instruction annotations')
    with tempfile.TemporaryDirectory(prefix='permafrost-atomic-') as temporary:
        folder = Path(temporary)
        source = folder/'acquire.c'
        source.write_text(SOURCE.replace('ACQUIRE', translated))
        binary = folder/'acquire'
        subprocess.run(['clang', '-O2', '-pthread', str(source), '-o', str(binary)], check=True)
        subprocess.run([str(binary)], check=True)
    print('Exclusive acquisition: eight competing threads complete 80,000 protected updates; a nonzero lock is preserved.')


if __name__ == '__main__':
    main()
