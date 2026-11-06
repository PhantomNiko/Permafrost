#!/usr/bin/env python3
"""Execute recovered ARM global exchange and increment operations.

Pooka's Free Software License.
"""
from pathlib import Path
import subprocess
import sys
import tempfile
sys.path.insert(0, str(Path(__file__).resolve().parents[1]/'tools/ghidra'))
from translate import atomic_views


def main():
    pattern = '''do {
 old = DAT_4055cc40;
 success = (bool)hasExclusiveAccess(0x4055cc40);
} while (!success);
DAT_4055cc40 = VALUE;'''
    exchange = atomic_views(pattern.replace('VALUE', '1'))
    increment = atomic_views(pattern.replace('VALUE', 'old + 1'))
    arm64 = '''do {
 old = DAT_4055cc40;
 status = 1;
 success = (bool)ExclusiveMonitorPass(0x4055cc40,0x10);
 if(success) {
  DAT_4055cc40 = old + 1;
  status = ExclusiveMonitorsStatus();
 }
} while(status != 0);'''
    arm64_increment = 'bool success;char status;\n' + atomic_views(arm64)
    code = '''#include <stdint.h>
#include <stdbool.h>
#include <pthread.h>
static uint32_t DAT_4055cc40=3;
static uint64_t sums[4];
static void *worker(void *argument) {
 uintptr_t index=(uintptr_t)argument;
 uint64_t sum=0;
 for(unsigned i=0;i<10000;i++) {
  uint32_t old;
  INCREMENT
  sum+=old;
 }
 sums[index]=sum;return 0;
}
int main(void) {
 uint32_t old;
 EXCHANGE
 if(old!=3 || DAT_4055cc40!=1)return 1;
 pthread_t threads[4];
 for(uintptr_t i=0;i<4;i++)if(pthread_create(&threads[i],0,worker,(void *)i))return 2;
 for(unsigned i=0;i<4;i++)if(pthread_join(threads[i],0))return 3;
 uint64_t sum=sums[0]+sums[1]+sums[2]+sums[3];
 return DAT_4055cc40!=40001 || sum!=40000ULL*40001/2;
}
'''.replace('EXCHANGE', exchange)
    with tempfile.TemporaryDirectory(prefix='permafrost-atomics-') as directory:
        root=Path(directory)
        for update in (increment,arm64_increment):
            (root/'probe.c').write_text(code.replace('INCREMENT',update))
            subprocess.run(['clang','-std=c11','-O2','-pthread','-Wall','-Wextra','-Werror',
                            str(root/'probe.c'),'-o',str(root/'probe')],check=True)
            subprocess.run([str(root/'probe')],check=True)
    print('Recovered exchange and concurrent increment preserve native values.')


if __name__=='__main__':main()
